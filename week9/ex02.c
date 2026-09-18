#include <stdio.h>
int Palindrome(int n);
int main(){
    int sN,eN,temp,count=0,sum=0;
    printf("Enter yhe start and end numbers: ");
    scanf("%d %d",&sN,&eN);
    if (sN > eN){
        temp = sN;
        sN = eN;
        eN = temp;
    }
    printf("The palindrome numbers within the interval [%d, %d] are:\n",sN,eN);
    for(int i = sN;i<=eN;i++){
        if(Palindrome(i)){
            printf("%d ", i);
            count++;
            sum += i;
        }
    }
    printf("\nTotal palindrome numbers: %d\n", count);
    printf("Sum of palindrome numbers: %d\n", sum);
}
int Palindrome(int n)
{
    int original = n, reversed = 0, digit;
    while (n > 0)
    {
        digit = n % 10;
        reversed = reversed * 10 + digit;
        n /= 10;
    }
    return original == reversed;
}