#include <stdio.h>
int main(){
    int A[3][3]={1,0,-1,-1,2,3,2,4,5};
    printf("\t%d\t%d\t%d\n\t%d\t%d\t%d\n\t%d\t%d\t%d\n\n",A[0][0],A[0][1],A[0][2],A[1][0],A[1][1],A[1][2],A[2][0],A[2][1],A[2][2]);
    for(int i =0;i<3;i++){
        for(int j=0;j<3;j++){
            if(i != j){
                A[i][j]=0;
            }
            printf("\t%d",A[i][j]);
        }
        printf("\n");
    }
   
}