#include <stdio.h>
int main() {
    int size = 6;
    int array[] = {3, 1, 2, 4, 5, 6};
    int sum=0;
    int *pt = array;
    for(int i = size-1; i>=0;i--){
        if(*(pt+i)%2==0){
            sum = sum + *(pt+i);
        }
    }
    printf("The sum of even number is: %d\n",sum);
}