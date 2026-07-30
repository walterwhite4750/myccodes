#include <stdio.h>
int main()
{int i,n,temp[5];
    int arr[5] = {1,2,3,4,5};
  printf("THE ARRAY ORIGINALLY IS:\n");
    for(i=0;i<5;i++){
        printf("%d",arr[i]);
    }
    printf("\nENTER NO.Of TIMES TO SHIfT\n");
    scanf("%d",&n);
    for(i=0;i<5;i++){
        int tempindex = (i+n)%5;
        temp[tempindex] = arr[i];}
        printf("AfTER SHIfTING:\n");
    for(i=0;i<5;i++){
        printf("%d",temp[i]);
    }
    return 0;
}
