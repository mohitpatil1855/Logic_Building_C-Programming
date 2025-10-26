#include <stdio.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL CheckZero(int iNo)
{
    int iDigit = 0;

    if (iNo < 0)
    {
        iNo = -iNo;
    }

    while (iNo != 0)
    {
        iDigit = iNo % 10;
        if (iDigit == 0)
        {
            return TRUE; // found zero
        }
        iNo = iNo / 10;
    }
    return FALSE; // no zero found
}

int main()
{

    int iValue = 0;
    BOOL bRet = FALSE;

    printf("Enter Number:");
    scanf("%d", &iValue);

    bRet = CheckZero(iValue);

    if (bRet == TRUE)
    {
        printf("It contains Zero..");
    }
    else
    {
        printf("There is No Zero..");
    }

    return 0;
}