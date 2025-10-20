#include <stdio.h>

int PrintRevRange(int iNo1, int iNo2)
{
    int iCnt = 0;

    if (iNo1 > iNo2)
    {
        printf("Invaild Input");
    }
    else
    {
        for (iCnt = iNo2; iCnt >= iNo1; iCnt--)
        {
            printf("%d  ", iCnt);
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

    PrintRevRange(iValue1, iValue2);

    return 0;
}