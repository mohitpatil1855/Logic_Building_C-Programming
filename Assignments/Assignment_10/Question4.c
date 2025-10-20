#include <stdio.h>

double FhToCs(float fNo)
{
    return (fNo - 32) * (5.0 / 9.0);
}

float main()
{
    float fValue = 0.0;
    double dRet = 0.0;

    printf("Enter Temperature in Farenheit : ");
    scanf("%f", &fValue);

    dRet = FhToCs(fValue);

    printf("Conversion of Fareheit to Celsius is  : %lf", dRet);

    return 0;
}