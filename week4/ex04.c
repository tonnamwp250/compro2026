#include <stdio.h>
int main(){
    int num,mul;
    printf("Enter a number: ");
    scanf("%d",&num);
    for(int i=1;i<=12;i++){
        mul = num * i;
        printf("%d x %d = %d\n",num,i,mul);
    }
}