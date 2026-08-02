#include<stdio.h>
int replace(int *a,int *b,int *temp){
    *temp = *a;
    *a = *b;
    *b = *temp;
}

int main(){int num1,num2,temp;
    printf("ENTER NUMBER1:");
    scanf("%d",&num1);
    printf("ENTER NUMBER2:");
    scanf("%d",&num2);
    replace(&num1,&num2,&temp);
    printf("NUMBER1 replaced:%d\n",num1);
    printf("NUMBER2 replaced:%d\n",num2);
    return 0;
}