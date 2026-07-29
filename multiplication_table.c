#include<stdio.h>
int calc()
{
    int num,i; 
    printf("ENTER NUM TO GET MUTIPLICATION TABLE UPTO 10\n");
    scanf("%d",&num);
    for(i=1;i<11;i++){
        printf("%d\n",num*i);
    }
}
int main(){
    calc();
    return 0;
}