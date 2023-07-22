//program to find the smallest number of notes to represent a amount
#include <stdio.h>

int main()
{
    int amount;
    int times, remainder;

    printf("Enter the amount you got:\n");
    scanf("%d", &amount);

    printf("%d is equal to:\n", amount);

    if (amount >= 100)
    {
        times = amount / 100;
        amount = amount % 100;
        printf("%d 100 notes\n", times);
    }
    else if (amount < 100 && amount >= 50)
    {
        times = amount / 50;
        amount = amount % 50;
        printf("%d 50 notes\n", times);
    }
    else if (amount < 50 && amount >= 10)
    {
        times = amount / 10;
        amount = amount % 10;
        printf("%d 10 notes\n", times);
    }
    else if (amount < 10 && amount >= 5)
    {
        times = amount / 5;
        amount = amount % 5;
        printf("%d 5 notes\n", times);
    }
    else if (amount < 5 && amount >= 2)
    {
        times = amount / 2;
        amount = amount % 2;
        printf("%d 2 notes\n", times);
    }
    else
    {
        times = amount;
        printf("%d 1 notes\n", times);
    }

    return 0;
}
