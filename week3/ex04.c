#include <stdio.h>
int main(){
    char name[50],grade;
    float ave,cal,phy,sci;
    printf("Enter a name: ");
    scanf("%s",&name);
    printf("Enter a Calcukus score: ");
    scanf("%f",&cal);
    printf("Enter a Physic score: ");
    scanf("%f",&phy);
    printf("Enter a Science score: ");
    scanf("%f",&sci);
    ave = (cal+phy+sci)/3;
    if (ave >= 80){
        grade='A';
    }
    else if (70<=ave && ave<=80){
        grade='B';
    }
    else if (60<=ave && ave<=70){
        grade='C';
    }
    else if (50<=ave && ave<=60){
        grade='D';
    }
    else if (ave<50){
        grade='F';
    }
    printf("%s, your average is %.2f. You got grade %c\n",name,ave,grade);
    return 0;
}