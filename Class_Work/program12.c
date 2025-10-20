
/*
  START
       Accept umber and store as no
       Divide by 2
       If the remainder is 0
          then display as Even
       otherwise
           display as Odd
  STOP
*/


#include <stdio.h>


void CheckEvenOdd(int iNo)
{

    int iRem = 0;

    iRem = iNo % 2;

    if (iRem == 0)
    {
        printf("Given number is Even");
    }
    else
    {
        printf("Given number is Odd");
    }
}

int main()
{

    int iValue = 0;

    printf("Enter Number: ");
    scanf("%d", &iValue);

    CheckEvenOdd(iValue);

    return 0;
}