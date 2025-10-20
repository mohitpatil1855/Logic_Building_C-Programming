#include <stdio.h>

int PrintRngEvenSum(int iNo1, int iNo2)
{
    int iCnt = 0;
    int iSum = 0;
    if (iNo1 > iNo2)
    {
        printf("Invaild Input");
    }
    else if (iNo1 < 0 || iNo2 < 0)
    {
        printf("Invaild Input");
    }
    else
    {
        for (iCnt = iNo1; iCnt <= iNo2; iCnt++)
        {
            if (iCnt % 2 == 0)
            {
                iSum += iCnt;
            }
        }
        printf("Summation of Even Range is : %d ", iSum);
    }
}

//Time Complexeity : O(N)

int main()

{
    int iValue1 = 0, iValue2 = 0;

    printf("Enter Range Starting :");
    scanf("%d", &iValue1);

    printf("Enter Range Ending :");
    scanf("%d", &iValue2);

    PrintRngEvenSum(iValue1, iValue2);

    return 0;
}