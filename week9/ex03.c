#include <stdio.h>
int sumOfOddSquares(int start, int end);
int main(){
    int start, end, result;
    printf("Enter the two integers (start end): ");
    scanf("%d %d", &start, &end);
    result = sumOfOddSquares(start, end);
    printf("Sum of squares of odd numbers from %d to %d is %d\n",
           start, end, result);
    return 0;
}
int sumOfOddSquares(int start, int end){
    int sum = 0;
    for (int i = start; i <= end; i++)
    {
        if (i % 2 != 0)
        {
            sum += i * i;
        }
    }
    return sum;
}