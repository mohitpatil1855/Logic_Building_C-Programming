#include <stdio.h>
#include <stdlib.h>

int DisplayDiff(int Arr[], int iSize)
{
    int icnt = 0;
    int iSmallest = Arr[0]; // Initialize to First element
    int iLargest = Arr[0];

    for (icnt = 0; icnt < iSize; icnt++)
    {
        if (iSmallest > Arr[icnt])
        {
            iSmallest = Arr[icnt];
        }
        else if (iLargest < Arr[icnt])
        {
            iLargest = Arr[icnt];
        }
    }
    return (iLargest - iSmallest);
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

    iRet = DisplayDiff(ptr, iLength);

    printf("Difference Between Largest and Smallest in the Array is : %d\n", iRet);

    free(ptr); // free up dynamically allocated memory                //IMP

    return 0;
}