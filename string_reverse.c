#include<stdio.h>
#include<string.h>
int main(){
    char string[47];
    char revstring[47];
    printf("enter a string:");
    scanf("%s",&string);
    printf("\n%zu",strlen(string));
    int len = strlen(string);
    int i,j = 0;
    for( i = len - 1;i>=0;i--){
        revstring[j] = string[i]; 
        j++;
    }
    revstring[j] = '\0';
     printf("\nreversed string :%s",revstring);
    return 0;
}