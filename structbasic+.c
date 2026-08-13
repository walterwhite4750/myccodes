#include <stdio.h>
typedef struct {
    int id ;
    char name [47];
}student;
int main() {
 student stud[3];
 student *v = stud;
    for(int i=0;i<3;i++){
        printf("enter student %d id :",i);
        scanf("%d",&(v + i)->id);
        printf("enter student %d name :",i);
        scanf("%s",(v + i )->name);
    }
    for(int i=0;i<3;i++){
        printf("student %d id :%d\n",i,(v + i)->id);
        printf("student %d name :%s",i,(v + i)->name);
    }
    return 0;
}