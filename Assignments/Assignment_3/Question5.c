#include <stdio.h>
typedef int BOOL;

#define TRUE 1
#define FALSE 0

BOOL CheckVowel(char cChar)
{
    if (cChar == 'a' || cChar == 'e' || cChar == 'i' || cChar == 'o' || cChar == 'u' ||
        cChar == 'A' || cChar == 'E' || cChar == 'I' || cChar == 'O' || cChar == 'U')
    {
        return TRUE;
    }

    else
    {
        return FALSE;
    }
}

int main()
{
    char cAlphabet = '\0';
    BOOL bRet = FALSE;

    printf("Enter Character :");
    scanf("%c", &cAlphabet);

    bRet = CheckVowel(cAlphabet);

    if (bRet == TRUE)
    {
        printf("Given Character is Vowel. ");
    }
    else
    {
        printf("Given Character is Not Vowel. ");
    }

    return 0;
}