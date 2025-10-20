#include <stdio.h>

void PrintNumLine(int iNo)
{
    int iCnt = 0;

    for (iCnt = -iNo; iCnt <= iNo; iCnt++)
    {
        printf("%d ", iCnt);
    }
}

//Time Complexity : O(N*2)


int main()
{
    int iValue = 0;

    printf("Enter Number : ");
    scanf("%d", &iValue);

    PrintNumLine(iValue);

    return 0;
}