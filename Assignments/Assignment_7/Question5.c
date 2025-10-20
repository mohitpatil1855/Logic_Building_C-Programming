#include <stdio.h>

void Print5Multiple(int iNo)
{
    int iCnt = 0;

    for (iCnt = 1; iCnt <= 5; iCnt++)
    {
        printf("%d ", iNo * iCnt);
    }
}

//Time Complexity : O(5)


int main()
{
    int iValue = 0;

    printf("Enter Number : ");
    scanf("%d", &iValue);

    Print5Multiple(iValue);

    return 0;
}