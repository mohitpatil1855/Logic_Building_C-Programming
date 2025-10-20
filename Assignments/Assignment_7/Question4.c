#include <stdio.h>

void PrintOdd(int iNo)
{
    int iCnt = 0;

    for (iCnt = 1; iCnt <= iNo; iCnt++)
    {
        if (iCnt % 2 != 0)
        {
            printf("%d ", iCnt);
        }
    }
}

//Time Complexity : O(N)


int main()
{
    int iValue = 0;

    printf("Enter Number : ");
    scanf("%d", &iValue);

    PrintOdd(iValue);

    return 0;
}