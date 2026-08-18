#include<stdio.h>
int recbs(int arr[],int low,int high,int target){
    if(low > high){ return -1;
}
int mid = low + (high - low)/2;
if(arr[mid] == target){
    return mid;
}
if(arr[mid]>target){
    return recbs(arr,low,mid-1,target);
}
return recbs(arr,mid + 1,high,target);
}
int main(){
    int arr[7];
    int low =0,high = 6,target;
    printf("enter arr with int values 7 charecters :");
    for(int i=0;i<7;i++){
    scanf("%d",&arr[i]);
    }
    printf("enter target :");
    scanf("%d",&target);
    int result = recbs(arr,low,high,target);
    if(result != -1){
        printf("target found at index :%d",result);
    }
    return 0;
}