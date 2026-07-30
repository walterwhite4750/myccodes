#include <stdio.h>

int main()
{int arr[5] = {1,2,3,4,5};
     int max = 0,secondmax=1;
     for(int i=0;i<5;i++){
         if(arr[i]>max){
            secondmax = max;
             max = arr[i];
             ;
         }
     }
     printf("maximum value of the array is:%d\n",max);
     printf("second maximum value is :%d",secondmax);
    return 0;
}