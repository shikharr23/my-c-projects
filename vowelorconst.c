#include <stdio.h>

int main()
{

    char ch;

    printf("Enter a character: ");
    scanf("%c", &ch);

    if (ch == 'A' || ch == 'a' || ch == 'I' || ch == 'i' || ch == 'O' || ch == 'o' || ch == 'E' || ch == 'e' || ch == 'U' || ch == 'u')
    {
        printf("It is a vowel");
    }

    else
    {
        printf("It is a consonant");
    }
    return 0;
}