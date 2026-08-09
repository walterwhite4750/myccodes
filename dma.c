#include<stdio.h>
#include<stdlib.h>
int main(){int n, base = 1,rows=3,colomns=4,i=0,j=0;
    int **arr = (int**)calloc(rows,sizeof(int*));
   if(arr == NULL){
       printf("memory allocation failed");
   }
    for(i=0;i<rows;i++){
        arr[i] = (int*)calloc(colomns,sizeof(int));
        if(arr == NULL){printf("alloocation failed");}
        for(j=0;j<colomns;j++){
            arr[i][j] = base;
            base++;
        }
    }
    for(i=0;i<rows;i++){
        for(j=0;j<colomns;j++){
            arr[i][j] = (i * 10) +j;
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    } free(arr);
    return 0;
}