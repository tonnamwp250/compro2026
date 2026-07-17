#include <stdio.h>
int main(){
    char name[20];
    int ID;
    float prog,phy,cal,gpa;

    printf("Enter your Name: ");
    scanf("%[^\n]",&name);
    printf("Enter your student ID: ");
    scanf("%d",&ID);
    printf("Enter your Programming score: ");
    scanf("%f",&prog);
    printf("Enter your Physics score: ");
    scanf("%f",&phy);
    printf("Enter your Calculus score: ");
    scanf(" %f",&cal);
    gpa = (prog+phy+cal)/3;
    printf("Hi %s(%d)! Your GPA is %.2f\n",name,ID,gpa);
    
    return 0;
}