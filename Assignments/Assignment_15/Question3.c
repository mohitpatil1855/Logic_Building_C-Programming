#include <stdio.h>

int CountRange(int iNo)
{
    int iDigit = 0;
    int iFrequency = 0;

    if (iNo < 0)
    {
        iNo = -iNo;
    }

    while (iNo != 0)
    {
        iDigit = iNo % 10;

        if (iDigit > 3 && iDigit < 7) // check between 3 & 7 or not
        {
            iFrequency++;
        }
        iNo = iNo / 10;
    }
    return iFrequency;
}

int main()
{

    int iValue = 0;
    int iRet = 0;

    printf("Enter Number:");
    scanf("%d", &iValue);

    iRet = CountRange(iValue);

    printf("%d", iRet);

    return 0;
}