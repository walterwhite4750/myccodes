
#include <stdio.h>
void arrmod(int arr[]){
    for(int i =0;i<3;i++){
        (*(arr + i))*=2;
    }
}
int main()
{int array[3] = {1,2,3}; 
    arrmod(array);
    for(int i=0;i<3;i++){
     printf("%d",array[i]);   
    }
    
    return 0;
}