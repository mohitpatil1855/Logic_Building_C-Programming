#include <stdio.h>

int USDToINR(int iNo)
{
    if (iNo < 0)
    {
        iNo = -iNo;
    }

    return iNo * 70;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter value in USD : ");
    scanf("%d", &iValue);

    iRet = USDToINR(iValue);

    printf("Value in INR is : %d", iRet);

    return 0;
}