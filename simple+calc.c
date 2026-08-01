#include<stdio.h>
int main()
{int num1,num2;
char choice;
    do{ printf("ENTER NO 1 : ");
    scanf("%d",&num1);
    printf("ENTER NO 2 : ");
    scanf("%d",&num2);
    printf("CHOOSE THE OPERATOR(+ - * % / q(quit) : ");
    scanf(" %c",&choice);
    switch (choice){
        case '+' :
        printf("%d\n",num1 + num2);
        break;
        case '-':
        printf("%d\n",num1 - num2);
        break;
        case '*' :
        printf("%d\n",num1 * num2);
        break;
         case '%' :
        printf("%d\n",num1 % num2);
        break;
         case '/' :
        printf("%d\n",num1 / num2);
        break;
        case 'q' :
        printf("\nYOU DECIDED TO QUIT");
        return 0;
        default :
        printf("no correct operator entered");
    }}while(1);
    
}