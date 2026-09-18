#include <stdio.h>
int main(){
    int test = 0;
    printf("The address of test variable is at: %p\n",&test);
    int *pt_test = &test;
    *pt_test = 99;
    printf("The new value of test via pointer is: %d\n",*pt_test);
}