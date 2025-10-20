#include <stdio.h>

int FactMult(int iNo)
{
    int iCnt = 0;
    int iFact = 1;

    for (iCnt = 1; iCnt <= iNo / 2; iCnt++)
    {
        if ((iNo % iCnt) == 0)
        {
            iFact = iFact * iCnt;
        }
    }
    return iFact;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter Number :");
    scanf("%d", &iValue);

    iRet = FactMult(iValue);

    printf("Multiplication of Factors is :%d", iRet);

    return 0;
}