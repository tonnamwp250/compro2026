#include <stdio.h>
int main(){
    int x[8],sum=0;
    for(int i=0;i<8;i++){
        printf("Enter the marks of student %d: ",i+1);
        scanf("%d",&x[i]);
    }
    int high = x[0];
    int low = x[0];
    for (int i = 1;i<8;i++){
        if(x[i]>high){
            high=x[i];
        }
        if(x[i]<low){
            low=x[i];
        }
    }
    printf("Smallest number: %d\n",low);
    printf("Largest number: %d\n",high);
}