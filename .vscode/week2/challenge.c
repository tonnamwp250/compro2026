#include <stdio.h>
int main(){
    float n1,n2,n3,sum,ave;
    printf("Enter integer #1: ");
    scanf("%f",&n1);
    printf("Enter integer #2: ");
    scanf("%f",&n2);
    printf("Enter integer #3: ");
    scanf("%f",&n3);
    if(n1 < n2 && n1 < n3){
        printf("Minimum: %.0f\n",n1);
    }if(n2 < n1 && n2 < n3){
        printf("Minimum: %.0f\n",n2);
    }if(n3 < n2 && n3 < n1){
        printf("Minimum: %.0f\n",n3);
    }
    if(n1 > n2 && n1 > n3){
        printf("Maximum: %.0f\n",n1);
    }if(n2 > n1 && n2 > n3){
        printf("Maximum: %.0f\n",n2);
    }if(n3 > n2 && n3 > n1){
        printf("Maximum: %.0f\n",n3);
    }
    sum = n1 + n2 + n3;
    ave = sum/3;
    printf("Sum:%.0f\nAverage: %.2f\n",sum,ave);
}