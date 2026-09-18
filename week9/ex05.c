#include <stdio.h>
void sum(int arr[], int n);
int main(){
    int n;
    int arr[100];
    int i;
    printf("N: ");
    scanf("%d", &n);
    for (i = 0; i < n; i++){
        printf("Input: ");
        scanf("%d", &arr[i]);
    }
    sum(arr, n);
    return 0;
}
void sum(int arr[], int n){
    int i;
    int evenSum = 0;
    int oddSum = 0;
    int evenCount = 0;
    int oddCount = 0;
    for (i = 0; i < n; i++){
        if (i % 2 == 0){
            evenSum = evenSum + arr[i];
            evenCount++;
        }else{
            oddSum = oddSum + arr[i];
            oddCount++;
        }
    }
    printf("Output:\n");
    printf("Even index elements -> Sum: %d,Average: %.2f\n",evenSum,(float)evenSum / evenCount);
    printf("Odd index elements -> Sum: %d, Average: %.2f\n",oddSum,(float)oddSum / oddCount);
}