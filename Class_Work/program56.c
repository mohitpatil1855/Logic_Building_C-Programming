// Take input from user and check prime or not

#include <stdio.h>
#include <stdbool.h>

bool CheckPrime(int iNo)
{
    int iCnt = 0;

    if (iNo < 0) // updater
    {
        iNo = -iNo;
    }

    for (iCnt = 2; iCnt <= (iNo / 2); iCnt++)
    {
        if ((iNo % iCnt) == 0)
        {
            break;
        }
    }

    if (iCnt > (iNo / 2)) // NO Factors
    {
        return true;
    }
    else // have factors
    {
        return false;
    }
}

int main()
{
    int iValue = 0;
    bool bRet = false;

    printf("Enter the number: \n");
    scanf("%d", &iValue);

    bRet = CheckPrime(iValue);

    if (bRet == true)
    {
        printf("%d  is Prime number\n", iValue);
    }
    else
    {
        printf("%d is Not Prime number\n", iValue);
    }

    return 0;
}