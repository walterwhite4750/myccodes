#include <stdio.h>

int main()
{int arr[5] = {1,2,3,4,5};
     int max = 0;
     for(int i=0;i<5;i++){
         if(arr[i]>max){
             max = arr[i];
         }
     }
     printf("%d:maximum value of the array is",max);
    return 0;
}