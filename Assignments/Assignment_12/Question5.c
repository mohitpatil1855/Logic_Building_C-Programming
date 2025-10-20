
#include <stdio.h>
#include <stdbool.h>

bool chkDivisibleBy5(int iNo)
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

    printf("Enter the number: \n");
    scanf("%d", &iValue);

    printf("%s\n", chkDivisibleBy5(iValue) ? "Yes" : "No");

    return 0;
}