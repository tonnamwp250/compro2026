#include <stdio.h>
int main(){
    char name[20],Education[20],gender;
    int age,weight;
    float height;

    printf("Enter your Name: ");
    scanf("%[^\n]",&name);
    printf("Enter your Age: ");
    scanf("%d",&age);
    printf("Enter your hight: ");
    scanf("%f",&height);
    printf("Enter your weight: ");
    scanf("%d",&weight);
    printf("Enter your gender: ");
    scanf(" %c",&gender);
    printf("Enter your Education Qualification: ");
    scanf(" %[^\n]",&Education);
   
    printf("Name : %s\n",name);
    printf("Age: %d\n",age);
    printf("Gender: %c\n",gender);
    printf("Height: %.1f\n",height);
    printf("Weight: %d\n",weight);
    printf("Education: %s\n",Education);
    return 0;
}