#include <stdio.h>
int main(){
    int x[10],sum=0,even=0,odd=0;
    for(int i=0;i<10;i++){
        printf("Enter value %d: ",i+1);
        scanf("%d",&x[i]);
    }
    for(int i=0;i<10;i++){
        if(x[i]%2==0){
            even=even+1;
        }else{
            odd=odd+1;
        }
    }
    printf("Even numbers: %d\nOdd numbers: %d\n",even,odd);
}