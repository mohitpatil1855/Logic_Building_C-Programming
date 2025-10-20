
#include <stdio.h>

int SumOfEvenFactors(int iNo)
{
    int iCnt = 0;
    int iSum = 0;

    if (iNo < 0) // updater
    {
        iNo = -iNo;
    }

    for (iCnt = 1; iCnt <= (iNo / 2); iCnt++)
    {
        if (iCnt % 2 == 0)
        {
            if ((iNo % iCnt) == 0)
            {
                iSum += iCnt;
            }
        }
    }
    return iSum;
}

// Time Complexeity : O(N/2)

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter the number: \n");
    scanf("%d", &iValue);

    iRet = SumOfEvenFactors(iValue);

    printf("Sum of Even factors is :%d\n", iRet);

    return 0;
}