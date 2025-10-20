#include <stdio.h>

float AreaRectangle(float fNo1, float fNo2)
{
    return fNo1 * fNo2;
}

int main()
{
    float fValue1 = 0.0, fValue2 = 0.0;
    float fRet = 0.0;

    printf("Enter Height : ");
    scanf("%f", &fValue1);

    printf("Enter Width : ");
    scanf("%f", &fValue2);

    fRet = AreaRectangle(fValue1, fValue2);

    printf("Area of Rectangle is : %f", fRet);

    return 0;
}