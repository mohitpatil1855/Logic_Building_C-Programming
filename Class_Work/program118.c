#include <stdio.h>

void Display(int Arr[])
{
    int icnt = 0;

    for (icnt = 0; icnt < 4; icnt++)
    {
        printf("%d\n", Arr[icnt]);
    }
}

int main()
{
    int Brr[] = {10, 20, 30, 40}; 

    Display(Brr);  //Display(100)

    return 0;
}
