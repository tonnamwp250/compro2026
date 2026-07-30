#include <stdio.h>
int main(){
    int num;
    printf("Enter a number: ");
    scanf("%d",&num);
    switch (num < 1 || num > 100)
    {
    case 0 : 
        switch (num%2)
        {
        case 0 :
            printf("num is even");
            break;
        
        default:
            printf("num is odd");
            break;
        }

        break;
    case 1 :
        printf("num is out of range");
        break;
    }

    
    return 0;
}