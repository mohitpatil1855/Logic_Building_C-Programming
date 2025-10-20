#include <stdio.h>

int FactorialDiff(int iNo)
{
    int iCnt = 0;
    int iEvenFac = 1, iOddFace = 1;
    int iDiff = 0;

    if (iNo < 0)
    {
        iNo = -iNo;
    }

    for (iCnt = 2; iCnt <= iNo; iCnt++)
    {
        if (iCnt % 2 == 0)
        {
            iEvenFac *= iCnt;
        }
        else
        {
            iOddFace *= iCnt;
        }
    }
    iDiff = iEvenFac - iOddFace;

    return iDiff;
}

//Time Complexity : O(N)


int main()

{
    int iValue = 0;
    int iRet = 0;

    printf("Enter Number :");
    scanf("%d", &iValue);

    iRet = FactorialDiff(iValue);

    printf("Factorial is : %d", iRet);

    return 0;
}