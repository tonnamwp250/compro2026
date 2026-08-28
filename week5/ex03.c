#include <stdio.h>
int main(){
    int x[5],sum=0;
    for(int i=0;i<5;i++){
        printf("Enter the marks of student %d: ",i+1);
        scanf("%d",&x[i]);
    }
    for(int i=0;i<5;i++){
        sum=sum+x[i];
    }
    printf("Total Marks : %d\n",sum);
    int high = x[0];
    for (int i = 1;i<5;i++){
        if(x[i]>high){
            high=x[i];
        }
    }
    printf("Highest Marks: %d\n",high);
}