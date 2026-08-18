#include<stdio.h>
int printntimes(int n){
    for(int i = 1;i<n;i++){
        if(i<n){
        printf("%d",i);
        }
}printf("%d",n);
}
int main(){
    int n;
    printf("enter n to print ");
    scanf("%d",&n);
    printntimes(n);
    return 0;
}