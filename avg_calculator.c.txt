#include<stdio.h>
int Average(int physics ,int math)
{float average;
 average = (physics + math) / 2;
 return average;}
int main(){
int phy,mat,avg;
for (int i = 1; i <= 5; i++)
{
printf("enter phy mark:");
scanf("%d",&phy);
printf("enter mat mark:");
scanf("%d",&mat);
avg = Average(phy,mat);
printf("average is:%d\n",avg);
if (avg >= 50){
printf("student passed \n");}
else {
printf("student failed \n");}
}
return 0;}