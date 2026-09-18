#include <stdio.h>
int main(){
    int array[] = {3, 1, 2, 4, 5, 6};
    int *pt = array;
    for(int i=0;i<6;i++){
        if(*(pt+i)> *(pt+i+1)){
            int temp = *(pt+i);
            *(pt+i) = *(pt+i+1);
            *(pt+i+1) = temp;
        }
    }
    printf("Max value: %d\n",*(pt+5));
    printf("Min value: %d\n",*pt);
}