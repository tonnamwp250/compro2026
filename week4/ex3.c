#include <stdio.h>
int main(){
    int x=1;
    while (x!=0){
        printf("Enter the number: ");
        scanf("%d",&x);
        int y = x%2;
        if(y==0){
            printf("%d is even.\n",x);
        }
        else{
            printf("%d is odd.\n",x);
        }
    }
    printf("Exiting Program... Bye\n");
}