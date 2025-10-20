#include <stdio.h>

float AreaCircle(float fNo)
{
    float fPI = 3.14;

    return fPI * fNo * fNo;
}

int main()
{
    float fValue = 0.0;
    float fRet = 0.0;

    printf("Enter Radius : ");
    scanf("%f", &fValue);

    fRet = AreaCircle(fValue);

    printf("Area of Circle is : %f", fRet);

    return 0;
}