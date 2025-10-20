#include <stdio.h>

int KMtoMeter(int iNo)
{
    return iNo * 1000;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter KiloMeter : ");
    scanf("%d", &iValue);

    iRet = KMtoMeter(iValue);

    printf("Conversion of Kilometer to Meter is  : %d", iRet);

    return 0;
}