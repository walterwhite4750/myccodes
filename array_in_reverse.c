#include<stdio.h>
int main(){
    int arr[5] = {1,2,3,4,5};
    printf("the array originally is :");
    for(int i=0;i<5;i++){
        printf("%d",arr[i]);
    }
    printf("in reverse order:");
    for(int j=4;j>=0;j--){
        printf("%d",arr[j]);
    }
    return 0;
}