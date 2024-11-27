#include <stdio.h>

int main()
{

    char ch;

    printf("Enter character: ");
    scanf("%c", &ch);

    if ((ch >= 65 && ch <= 90) || (ch >= 97 && ch <= 122))
    {
        printf("It is an alphabet");
    }

    else if ((ch >= 48) && (ch <= 57))
    {
        printf("It is a digit");
    }
    else
        printf("It is a symbol");

    return 0;
}