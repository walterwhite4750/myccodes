    #include<stdio.h>
    typedef struct stud {
        char name[47];
        int rollno;
        int dob;
    }student;
    int main(){
        int i;
        student s[4];
        for(i=0;i<4;i++){
            printf("enter name :");
            scanf("%s",s[i].name);
        }
        for(i=0;i<4;i++){
            printf("enter rollno :");
            scanf("%d",&s[i].rollno);
        }
        for(i=0;i<4;i++){
            printf("enter dob without spaces:");
            scanf("%d",&s[i].dob);
        }
        for(i=0;i<4;i++){
            printf("student %d name :%s\n", i + 1,s[i].name);
            printf("student %d rollno :%d\n", i + 1,s[i].rollno);
            printf("student %d dob :%d\n",i + 1,s[i].dob);
        }
        return 0;
    }