#include<stdio.h>
int main(){
    int n;
    int isprime=1;
    printf("ENTER THE NO:");
    scanf("%d",&n);
    
    if(n<=1){
         printf("NOT A PRIME NUMBER");
    }
    else{
        for(int i=2;i<n;i++){
            if(n%i == 0){
                isprime =0;
            }
        }
    }

if(isprime == 1){
    printf("prime number confirmed\n");
}
else{
    printf("not prime number\n");
}
    return 0;}