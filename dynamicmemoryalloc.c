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
    printf("%d",arr[i]);}
    free(arr);
    return 0;
}