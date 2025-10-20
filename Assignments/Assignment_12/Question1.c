#include <stdio.h>

void print_factors(int iNo)
{
    int iCnt = 0;

    if (iNo < 0)
    {
        iNo = -iNo;
    }

    for (iCnt = 1; iCnt <= (iNo / 2); iCnt++)
    {
        if (iNo % iCnt == 0)
        {
            printf("%d  ", iCnt);
        }
    }
}

// Time Complexeity : O(N/2)

int main()
{
    int iValue = 0;

    printf("Enter Number:");
    scanf("%d", &iValue);

    print_factors(iValue);

    return 0;
}