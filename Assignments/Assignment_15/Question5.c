#include <stdio.h>

int DisplayDiff(int iNo)
{
    int iDigit = 0;
    int iEvenSum = 0, iOddSum = 0;
    int iDiff = 0;

    if (iNo < 0)
    {
        iNo = -iNo;
    }

    while (iNo != 0)
    {
        iDigit = iNo % 10;
        if (iDigit % 2 == 0)
        {
            iEvenSum = iEvenSum + iDigit;
        }

        else
        {
            iOddSum = iOddSum + iDigit;
        }

        iNo = iNo / 10;
    }
    iDiff = iEvenSum - iOddSum;
    return iDiff;
}

int main()
{

    int iValue = 0;
    int iRet = 0;

    printf("Enter Number:");
    scanf("%d", &iValue);

    iRet = DisplayDiff(iValue);

    printf("%d", iRet);

    return 0;
}