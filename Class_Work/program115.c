#include <stdio.h>

void Display(int *Arr)
{
    int icnt = 0;

    for (icnt = 0; icnt < 4; icnt++, Arr++)
    {
        printf("%d\n", *Arr);
    }
}

int main()
{
    int Arr[] = {10, 20, 30, 40};

    Display(Arr);

    return 0;
}
