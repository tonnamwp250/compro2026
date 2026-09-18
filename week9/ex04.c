#include <stdio.h>
#include <ctype.h>
void countChar(char str[]);
int main()
{
    char str[100];
    printf("Input: ");
    fgets(str, sizeof(str), stdin);
    countChar(str);
    return 0;
}
void countChar(char str[])
{
    int letters = 0;
    int digits = 0;
    int special = 0;

    for (int i = 0; str[i] != '\0'; i++)
    {
        if (isalpha(str[i])){
            letters++;
        }
        else if (isdigit(str[i])){
            digits++;
        }
        else if (isspace(str[i])){
        }
        else{
            special++;
        }
    }
    printf("Letters: %d\n", letters);
    printf("Digits: %d\n", digits);
    printf("Special Characters / Symbols: %d\n", special);
}

