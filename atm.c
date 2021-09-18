#include <stdio.h>
int main()
{
    int withdraw;
    float balance;
    float const charges = 0.50;

    //printf("Input:\n");
    scanf("%d %f", &withdraw, &balance);
    if (balance >= withdraw)
    {
        if (withdraw % 5 == 0)
        {
            printf("Output:\n");
            printf("%.2f", balance - withdraw - charges);
        }
        else
        {
            printf("Output:\n");
            printf("%.2f", balance);
        }
    }
    else
    {
        printf("Output:\n");
        printf("%.2f", balance);
    }

    return 0;
}