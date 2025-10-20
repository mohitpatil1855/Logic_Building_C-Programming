#include <stdio.h>

int FindLargest(int iNo1, int iNo2, int iNo3)
{
    if (iNo1 > iNo2)
    {
        if (iNo1 > iNo3)
        {
            return iNo1;
        }
        else
        {
            return iNo3;
        }
    }
    else
    {
        if (iNo2 > iNo3)
        {
            return iNo2;
        }
        else
        {
            return iNo3;
        }
    }
}

int main()
{
    int iValue1 = 0, iValue2 = 0, iValue3 = 0;
    int iRet = 0;

    printf("Enter three Number :");
    scanf("%d  %d  %d", &iValue1, &iValue2, &iValue3);

    iRet = FindLargest(iValue1, iValue2, iValue3);

    printf("Largest among three is: %d\n ", iRet);

    return 0;
}