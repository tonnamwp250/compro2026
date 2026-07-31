#include <stdio.h>
int main(){
    int num,y,i;
    printf("Enter a number: ");
    scanf("%d",&num);
    y=num;
    i=num;
    for(i=i-1;i>0;i--){
        y = i*y;
    }
    printf("Factorial of %d is %d\n",num,y);
}