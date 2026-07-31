#include <stdio.h>
int main(){
    int i;
    float x,sum=0,ave;
    for(i=1;i<=10;i++){
    printf("%d.Enter the number: ",i);
    scanf("%f",&x);
    sum = x + sum;
    }
    printf("total sum is %.0f\n",sum);
    ave = sum / 10;
    printf("Average is %.2f\n",ave);
}