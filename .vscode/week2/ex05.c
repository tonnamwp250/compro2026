#include <stdio.h>
int main(){
    char name[20],lastn[20],University[10];
    int age;
    float heght;

    printf("Enter your full name: ");
    scanf("%s %s",&name,&lastn);
    printf("Enter your age: ");
    scanf("%d",&age);
    printf("Enter your heght: ");
    scanf("%f",&heght);
    printf("Enter your University: ");
    scanf("%s",&University);
    printf("Hi! Everyone. This is %c.%s from %s. I am %d years old\nand my height is\n%.1f cm tall.",lastn[0],name,University,age,heght);
    
    return 0;
}