#include <stdio.h>
int power(int n , int e ){
    if(n<0 || e<1){
        printf("negative number");
        return -1;
    }
     if(n == 0 || n ==1 || e==0){
         return 1;
    }
    return n * power(n, e - 1);
}
int main()
{   int num,result,exponent;
    printf("enter a num to get its power! :");
    scanf("%d",&num);
    if(num<0){
        printf("no factorial");
    }
    printf("enter the exp value");
    scanf("%d",&exponent);
   result =  power(num,exponent);
   printf("power is : %d",result);
    return 0;
}