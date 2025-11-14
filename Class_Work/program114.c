#include <stdio.h>

void Display(int *ptr)
{
    int icnt = 0;

    for (icnt = 0; icnt < 4; icnt++, ptr++)
    {
        printf("%d\n", *ptr);
    }
}

int main()
{
    int Arr[] = {10, 20, 30, 40};

    Display(Arr);

    return 0;
}
