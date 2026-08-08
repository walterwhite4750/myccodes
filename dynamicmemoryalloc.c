#include<stdio.h>
#include<stdlib.h>
int main(){int base = 1;
    int *arr = (int*)malloc(5*sizeof(int));
    if(arr == NULL){
        printf("memory allocation failed");
    }
    for(int i=0;i<5;i++){
        arr[i] = base;
        base++;
    }
    for(int i=0;i<5;i++){
    printf("%d ",arr[i]);}
    arr = realloc(arr,7*sizeof(int));
    for(int i=0;i<=6;i++){
        arr[i] = base;
        base++;
    }
    for(int i=0;i<=6;i++){
    printf("\n%d ",arr[i]);}
    return 0;
}