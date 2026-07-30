#include<stdio.h>
int main(){
    int n,fact = 1;
    printf("enter a no to do factorial:");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
            fact = fact * i;
    printf("%d\n",fact);    }
    
    return 0;
}