#include <stdio.h>

char DisplayConvert(char cValue)
{
    if (cValue >= 'a' && cValue <= 'z')
    {
        printf("Capital Letter is : %c", (cValue - 32));
    }
    else
    {
        printf("Already Capital ");
    }
}

int main()
{
    char cAlphabet = '\0';

    printf("Enter Character :");
    scanf("%c", &cAlphabet);

    DisplayConvert(cAlphabet);

    return 0;
}