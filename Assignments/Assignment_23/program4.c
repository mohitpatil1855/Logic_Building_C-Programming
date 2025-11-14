#include <stdio.h>
#include <stdlib.h>


int DisplayRangePrsnt(int Arr[], int iSize, int iFirst, int iLast)
{

    int icnt = 0;

    for (icnt = 0; icnt < iSize; icnt++)
    {
        if (iFirst <= Arr[icnt] && Arr[icnt] <= iLast)
        {
            printf("%d  ", Arr[icnt]);
        }
    }
}

int main()
{
    int iLength = 0, iCnt = 0, iStart = 0, iEnd = 0;
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

    printf("Enter Range Start :\n");
    scanf("%d", &iStart);

    printf("Enter Range End :\n");
    scanf("%d", &iEnd);

    DisplayRangePrsnt(ptr, iLength, iStart, iEnd);

    free(ptr); // free up dynamically allocated memory                //IMP

    return 0;
}