#include <stdio.h>
#include <stdbool.h>

bool ChkGreater(int iNo)
{
    if (iNo > 100)
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

    printf("Enter Number :");
    scanf("%d", &iValue);

    bRet = ChkGreater(iValue);

    if (bRet == true)
    {
        printf("Greater \n ");
    }
    else
    {
        printf("Less \n");
    }
    return 0;
}