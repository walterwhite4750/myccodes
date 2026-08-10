#include <stdio.h>
#include <stdlib.h>

int main() {
    int capacity = 4; // Start with a tiny capacity
    int len = 0;      // Current length of the string
    char *str = (char*)malloc(capacity * sizeof(char)); // Allocate initial memory

    if (str == NULL) {
        printf("Initial memory allocation failed!\n");
        return 1;
    }

    printf("Type a sentence of any length (press Enter to finish):\n");

    char ch;
    // Read characters one by one until the user presses Enter (\n) or EOF
    while ((ch = getchar()) != '\n' && ch != EOF) {
        
        // Check if we are running out of space (leave room for '\0')
        if (len >= capacity - 1) {
            capacity *= 2; // Double the capacity
            char *temp = (char*)realloc(str, capacity * sizeof(char));
            if (temp == NULL) {
                printf("Memory reallocation failed!\n");
                free(str);
                return 1;
            }
            str = temp; // Update pointer to the newly resized block
        }

        // Store the character and increment length
        str[len] = ch;
        len++;
    }

    // Null-terminate the string so C knows where it ends
    str[len] = '\0';

    // Print out what the user typed
    printf("\nYou successfully typed (%d characters):\n%s\n", len, str);

    // Free the dynamically allocated memory
    free(str);

    return 0;
}