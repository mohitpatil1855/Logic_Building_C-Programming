#include <stdio.h>
#include <stdlib.h>

void ChkDivisibile(int Arr[], int iSize)
{
    int icnt = 0;

    printf("Numbers divisible by 11 are : ");
    for (icnt = 0; icnt < iSize; icnt++)
    {
        if (Arr[icnt] % 5 == 0)
        {
            printf("%d   ", Arr[icnt]);
        }
    }
}

int main()
{
    int iLength = 0, iCnt = 0;
    int *ptr = NULL;

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

    ChkDivisibile(ptr, iLength);

    free(ptr); // free up dynamically allocated memory                //IMP

    return 0;
}