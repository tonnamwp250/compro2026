#include <stdio.h>
int main(){
    int i;
    struct Student{
        char name[100];
        int age;
        float score;
     }st[3];

        for(i=0  ; i<3 ; i++){

            printf("Student %d's name: ",i+1);
            scanf(" %99[^\n]", st[i].name);

            printf("Student %d's age: ", i+1 );
            scanf(" %d", &st[i].age);

            printf("Student %d's score: ", i+1 );
            scanf(" %f", &st[i].score);
        }
        printf("\n");

        for(i=0;i<3;i++){
            printf("Student %d name is %s,age %d score %.1f\n",i+1,st[i].name,st[i].age,st[i].score);
        }

}

