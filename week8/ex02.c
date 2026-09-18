#include <stdio.h>
int main(){
    int a = 10;
    int b = 20;
    int c = 30;
    int temp;
    int *pt_a = &a;
    int *pt_b = &b;
    int *pt_c = &c;
    int *pt_temp = &temp;
    printf("Before swap: a=%d, b=%d, c=%d\n",*pt_a,*pt_b,*pt_c);
    *pt_temp = *pt_a;
    *pt_a = *pt_b;
    *pt_b = *pt_c;
    *pt_c = *pt_temp;
    printf("After swap: a=%d, b=%d, c=%d\n",*pt_a,*pt_b,*pt_c);
}