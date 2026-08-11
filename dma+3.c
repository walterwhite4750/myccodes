#include<stdio.h>
#include<stdlib.h>
struct std {
    char stud[47];
    int marks;
};
int main(){
    int capacity = 4,count = 0;
    char choice;
    struct std *arr = (struct std *)calloc(4 , sizeof(struct std));
    if(arr == NULL){
        printf("memory allocation failed");
    }
    do{
        if(count>=capacity){
            capacity *= 2;
            struct std *temp = (struct std *)realloc(arr,capacity * sizeof(struct std));
            if(temp == NULL){
                printf("memory allocation failed");
            }
            arr = temp;
        }
        printf("enter student name :");
        scanf("%s",arr[count].stud);
        printf("enter marks : ");
        scanf("%d",&arr[count].marks);
        count++;
        printf("add another student?? press y for yes and n for no ");
        scanf(" %c",&choice);
    }while(choice == 'y'||choice == 'Y');
    printf("you added :%d students",count);
    free(arr);
    return 0;
}