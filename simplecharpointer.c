#include <stdio.h>
void arrmod(char *arr){
     while(*arr != '\0'){
         printf("%c",*arr);
         arr++;
     }
    }
    
int main()
{char arr[4] = "cat"; 
arrmod(arr);
    return 0;
}