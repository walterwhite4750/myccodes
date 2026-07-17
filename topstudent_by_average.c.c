#define studentnum 2
#define marksnum 5
#include <stdio.h>
#include <string.h>
struct student {
    char name[25];
    int marks[5];
};
int main(){int i,sum,average,highest_average=-1,current_average = -1;
char topstudent[25];
    struct student s1[2];
    for(i = 0;i<studentnum;i++){
        printf("enter student name:");
        scanf("%s",&s1[i].name);
            for(int j=0;j<marksnum;j++){
       printf("enter marks < 100");
       scanf("%d",&s1[i].marks[j]);
   }}
    
   for (i = 0;i<studentnum;i++){
        sum = 0;
        for (int j = 0;j<marksnum;j++){
            sum += s1[i].marks[j];}
    average = sum / marksnum;
    if(average == highest_average){
        printf("winner:",s1[i].name);
    }}
    
  return 0;  
}