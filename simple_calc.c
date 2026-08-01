#include<stdio.h>
int main()
{int num1,num2;
char choice;
    printf("ENTER NO 1");
    scanf("%f",&num1);
    printf("ENTER NO 2");
    scanf("%f",&num2);
    printf("CHOOSE THE OPERATOR(+ - * % /)");
    scanf(" %c",&choice);
    switch (choice){
        case '+' :
        printf("%d",num1 + num2);
        break;
        case '-':
        printf("%d",num1 - num2);
        break;
        case '*' :
        printf("%d",num1 * num2);
        break;
         case '%' :
        printf("%d",num1 % num2);
        break;
         case '/' :
        printf("%d",num1 / num2);
        break;
        default :
        printf("no correct operator entered");
    }
    return 0;
}