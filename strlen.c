#include<stdio.h>
#include<string.h>
int main(){
    char string[47];
    printf("enter a string:");
    scanf("%s",&string);
    printf("\n%zu",strlen(string));
    return 0;
}