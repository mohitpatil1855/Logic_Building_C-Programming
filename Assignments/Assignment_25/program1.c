#include <stdio.h>
#include <stdlib.h>

int EvenOddSumDiff(int Arr[], int iSize)
{

    int icnt = 0;
    int iEvenSum = 0, iOddSum = 0;

    for (icnt = 0; icnt < iSize; icnt++)
    {
        if (Arr[icnt] % 2 == 0)
        {
            iEvenSum += Arr[icnt];
        }
        else
        {
            iOddSum += Arr[icnt];
        }
    }
    return (iEvenSum - iOddSum);
}

int main()
{
    int iLength = 0, iCnt = 0;
    int *ptr = NULL;
    int iRet = 0;

    printf("Enter number of elements in Array :\n");
    scanf("%d", &iLength);

    ptr = (int *)malloc(iLength * sizeof(int));

    if (NULL == ptr) // Industrial way of coding                 //IMP
    {
        printf("Unable to allocate memory\n ");
        return -1;
    }

    printf("Enter %d elements :\n", iLength);

    for (iCnt = 0; iCnt < iLength; iCnt++)
    {
        printf("Enter Element %d : ", iCnt + 1);
        scanf("%d", &ptr[iCnt]);
    }

    iRet = EvenOddSumDiff(ptr, iLength);
    printf("Differnce in Summation of Even & Odd count is : %d\n", iRet);

    free(ptr); // free up dynamically allocated memory                //IMP

    return 0;
}