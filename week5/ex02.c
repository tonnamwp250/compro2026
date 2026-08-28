#include <stdio.h>

int main() {
    int original[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int reversed[9];
    int i, j;
    for (i = 0, j = 8; i < 9; i++, j--) {
        reversed[j] = original[i];
    }
    printf("Reversed Array: ");
    for (i = 0; i < 9; i++) {
        printf("%d ", reversed[i]);
    }
}