#include <stdio.h>

int PrintEvenRange(int iNo1, int iNo2)
{
    int iCnt = 0;

    if (iNo1 > iNo2)
    {
        printf("Invaild Input");
    }
    else
    {
        for (iCnt = iNo1; iCnt <= iNo2; iCnt++)
        {
            if (iCnt % 2 == 0)
            {
                printf("%d  ", iCnt);
            }
        }
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

    PrintEvenRange(iValue1, iValue2);

    return 0;
}