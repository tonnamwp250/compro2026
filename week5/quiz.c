#include <stdio.h>
int main(){
    int x;
    printf("Please enter number : ");
    scanf("%d",&x);
    printf("Output\n");
    for (int i=x;i>0;i--){
        printf("*");
    }
    printf("\n");
    
    for (int i=x-2;i>0;i--){
    
        printf("*");
        for (int j=x-2;j>0;j--)
        {
            printf(" ");
            
        }
        printf("*\n");
    }
    for (int i=x;i>0;i--){
        printf("*");
    }
}