#include <stdio.h>

double SqFtToSqMt(int iNo)
{
    return iNo * 0.0929;
}

float main()
{
    int iValue = 0;
    double dRet = 0.0;

    printf("Enter area in square feet : ");
    scanf("%d", &iValue);

    dRet = SqFtToSqMt(iValue);

    printf("Area in square meter is : %lf", dRet);

    return 0;
}