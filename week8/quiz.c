#include <stdio.h>
int main(){
    struct acc{
        char name[100],address[100],tel[15];
        int id;
    }acc;
    printf("Full name : ");
    scanf(" %99[^\n]", acc.name);
    printf(", ID : ");
    scanf("%d",&acc.id);
    printf("Address : ");
    scanf(" %99[^\n]",acc.address);
    printf("\nTel. ");
    scanf(" %99[^\n]",acc.tel);
}
