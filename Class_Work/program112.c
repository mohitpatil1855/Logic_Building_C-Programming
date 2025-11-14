#include <stdio.h>

void Display(int *ptr)       //Issue  //10 10 10 10
{
    int icnt = 0;

    for (icnt = 0; icnt < 4; icnt++)
    {
        printf("%d ", *ptr);
    }
}

int main()
{
    int Arr[] = {10, 20, 30, 40};

    Display(Arr);

    return 0;
}
