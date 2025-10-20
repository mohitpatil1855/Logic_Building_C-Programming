#include <stdio.h>

int DiffOfFactNonFact(int iNo)
{
    int iCnt = 0;
    int iSum1 = 0, iSum2 = 0;

    int iDifference = 0;

    for (iCnt = 1; iCnt < iNo; iCnt++)
    {
        if ((iNo % iCnt) == 0)
        {
            iSum1 += iCnt;
        }
        else
        {
            iSum2 += iCnt;
        }
    }
    iDifference = iSum1 - iSum2;
    return iDifference;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter Number :");
    scanf("%d", &iValue);

    iRet = DiffOfFactNonFact(iValue);

    printf("Difference of Factors and Non Factors :%d", iRet);

    return 0;
}