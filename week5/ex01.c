#include <stdio.h>
int main(){
    int x[10];
    for(int i=0;i<10;i++){
        printf("Enter the value %d here: ",i+1);
        scanf("%d",&x[i]);
    }
    printf("Values in array are: ");
    for(int i=0;i<10;i++){
        printf(" %d,",x[i]);
    }
}