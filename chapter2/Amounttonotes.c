//program to find the smallest number of notes to represent a amount
#include <stdio.h>

int main()
{
    int amount;
    int times, remainder;

    printf("Enter the amount you got:\n");
    scanf("%d", &amount);

    printf("%d is equal to:\n", amount);
    
    while(amount>0)
    {
    	
    if (amount >= 100)
    {
        times = amount / 100;
        amount = amount % 100;
        printf("%d of 100Rs notes\n", times);
    }
    else if (amount < 100 && amount >= 50)
    {
        times = amount / 50;
        amount = amount % 50;
        printf("%d of 50Rs notes\n", times);
    }
    else if (amount < 50 && amount >= 10)
    {
        times = amount / 10;
        amount = amount % 10;
        printf("%d of 10Rs notes\n", times);
    }
    else if (amount < 10 && amount >= 5)
    {
        times = amount / 5;
        amount = amount % 5;
        printf("%d of 5Rs notes\n", times);
    }
    else if (amount < 5 && amount >= 2)
    {
        times = amount / 2;
        amount = amount % 2;
        printf("%d of 2Rs notes\n", times);
    }
    else
    {
        times = amount;
        amount = amount%1;
        printf("%d of 1Rs notes\n", times);
    }
  }
    return 0;
}
