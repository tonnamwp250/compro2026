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
        if(st[0].score>st[1].score && st[0].score> st[2].score){
            printf("The highest scores belongs to %s at %.1f scores!",st[0].name,st[0].score);
        }
        if(st[1].score>st[0].score && st[1].score> st[2].score){
            printf("The highest scores belongs to %s at %.1f scores!",st[1].name,st[1].score);
        }
        if(st[2].score>st[1].score && st[2].score> st[0].score){
            printf("The highest scores belongs to %s at %.1f scores!",st[2].name,st[2].score);
        }
}

