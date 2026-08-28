#include <stdio.h>
int main(){
    int n;
    printf("Input:\nEnter number of elements: ");
    scanf("%d",&n);
    int x[n],y[n];
    printf("Enter %d integers: ",n);
    for(int i=0;i<n;i++){
        scanf("%d",&x[i]);
    }
    for(int i=0;i<n;i++){
        int count=0;
        int countd=0;
        for(int j=0;j<i;j++){
            if (x[i]==x[j]){
                countd=1;
                break;
            }
        }
        if(countd==0){
            for (int j=0;j<n;j++){
                if(x[j]==x[i]){
                    count++;
                }
            }
            printf("Element %d occurs %d times\n",x[i],count);
        }
    }
    
}