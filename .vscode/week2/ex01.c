#include <stdio.h>
int main(){
    int a;
    float b;
    char c;
    printf("Plase enter an integer value: ");
    scanf("%d",&a);
    printf("You entered %d\n",a);
    
    printf("Plase enter an float value: ");
    scanf("%f",&b);
    printf("You entered %.1f\n",b);
    
    printf("Plase enter an character value: ");
    scanf(" %c",&c);
    printf("You entered %c\n",c);
    return 0;
}