#include <stdio.h>
int main(){
    int i=1;
    float x,sum=0,ave;
    while (i<=10)
    {
    printf("%d.Enter the number: ",i);
    scanf("%f",&x);
    sum = x + sum;
    i++;
    }
    printf("total sum is %.0f\n",sum);
    ave = sum / 10;
    printf("Average is %.2f\n",ave);
}