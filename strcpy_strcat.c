#include<stdio.h>
#include<string.h>
void catandcopy(char *a,char *b,char *c,char *d){
    printf("enter string A:");
    scanf("%s",a);
    printf("enter string B:");
    scanf("%s",b);
    printf("after copying:\n");
    strcpy(a,b);
    printf("%s",a);
    printf("%s",b);
    printf("\nenter string C:");
    scanf("%s",c);
    printf("enter string D:");
    scanf("%s",d);
    printf("after concatenate:");
    strcat(c,d);
    printf("%s",c);
    printf("%s",d);
}
int main(){char a[47],b[47],c[47],d[47];
    catandcopy(a,b,c,d);
    return 0;
}