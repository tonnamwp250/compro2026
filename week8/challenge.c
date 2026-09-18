#include <stdio.h>
int main() {
    int array[5];
    printf("Enter 5 integer: ");
    scanf("%d %d %d %d %d",&array[0],&array[1],&array[2],&array[3],&array[4]);
    int *pt = array;
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4 - i; j++) {
            if (*(pt + j) < *(pt + j + 1)) {
                int temp = *(pt + j);
                *(pt + j) = *(pt + j + 1);
                *(pt + j + 1) = temp;
            }
        }
    }
    printf("Sorted descending: %d %d %d %d %d\n",array[0],array[1],array[2],array[3],array[4]);
}