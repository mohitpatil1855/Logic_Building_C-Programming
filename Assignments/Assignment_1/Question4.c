#include <stdio.h>
#include <stdbool.h>

bool CheckDivisibility(int iNo)
{
    if (iNo % 5 == 0)
    {
        return true;
    }
    else
    {
        return false;
    }
}
int main()
{

    int iValue = 0;
    bool bRet = false;

    printf("Enter a Number:\n");
    scanf("%d", &iValue);

    bRet = CheckDivisibility(iValue);

    if (bRet == true)
    {
        printf("Number is Divisible by 5\n");
    }
    else
    {
        printf("Number is Not Divisible by 5\n");
    }

    return 0;
}