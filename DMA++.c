#include<stdio.h>
#include<stdlib.h>
int main(){int n, base = 1,i=0,j=0;
int rowarr[4]={2,3,4,5};
int colomns[7]={1,2,3,4,5,6,7};
    int **arr = (int**)calloc(4,sizeof(int*));
   if(arr == NULL){
       printf("memory allocation failed");
   }
    for(i=0;i<4;i++){
        arr[i] = (int*)calloc(7,sizeof(int));
        if(arr == NULL){printf("alloocation failed");}
        for(j=0;j<7;j++){
            arr[i][j] = base;
            base++;
        }
    }
    for(i=0;i<4;i++){
        for(j=0;j<7;j++){
            arr[i][j] = (i * 10) +j;
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }for(i=0;i<4;i++){
        free(arr[i]);
    }
    
    
    free(arr);
    return 0;
}