#include<stdio.h>
void reversestr(char *str){
char *start  = str;
    if(str==NULL){
        return;}
char *end = str;
while(*end != '\0'){
    end++;
}end--;
while(start<end){
    char temp = *start;
    *start = *end;
    *end=temp;
    start++;
    end--;
}
}
int main(){
    char str[5] ="dogs"; 
    printf("array before reversing:%s\n",str);
    reversestr(str);
    printf("array after reversing:%s",str);
}