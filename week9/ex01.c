#include <stdio.h>
float area( int L ,int W);
float perimeter( int L ,int W);
float volume( int L ,int W,int H);
int main(){
    int l,w,h;
    while(1){
        printf("Enter length, width, and height in cm: ");
        scanf("%d %d %d",&l,&w,&h);
        if (l>0&& w>0&&h>0){
            break;
        }
        else{
            printf("Error: All dimensions must be greater than 0.\n");
        }
    }
    printf("Base Area: %.2f\n",area(l,w));
    printf("Perimeter: %.2f\n",perimeter(l,w));
    printf("Volume: %.2f\n",volume(l,w,h));
}  
float area( int L ,int W){ 
    float answer=0;
    answer = L*W;
    return answer;
}
float perimeter( int L ,int W){ 
    float answer=0;
    answer = 2*(L+W);
    return answer;
}
float volume( int L ,int W,int H){ 
    float answer=0;
    answer = L*W*H;
    return answer;
}