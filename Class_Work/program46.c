// Take input from user and display its factor and cheeck whether it is perfect or Not

#include <stdio.h>

void DisplayFactors(int iNo)
{
    int iCnt = 0;

    int iSave = 0;

    for (iCnt = 1; iCnt <= iNo / 2; iCnt++)
    {

        if ((iNo % iCnt) == 0)
        {
            printf("%d\t", iCnt);

            iSave = iSave + iCnt;
        }
    }
    printf("%d\t", iSave);

    if (iSave == iNo)
    {
        printf("The Given Number is Perfect Number ");
    }
}

int main()
{
    int iValue = 0;

    printf("Enter  Number :");
    scanf("%d", &iValue);

    DisplayFactors(iValue);

    return 0;
}