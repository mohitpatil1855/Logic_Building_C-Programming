#include <stdio.h>

float percentage(float iNo1, float iNo2)
{
    float fPer = 0.0;

    fPer = (iNo1 / iNo2) * 100;

    return fPer;
}

int main()
{
    int iValue1 = 0, iValue2 = 0;
    float fRet = 0.0;

    printf("Enter Marks Obtained :");
    scanf("%d", &iValue1);

    printf("Enter Total Marks :");
    scanf("%d", &iValue2);

    fRet = percentage(iValue1, iValue2);

    printf("Percentage : %f ", fRet);

    return 0;
}