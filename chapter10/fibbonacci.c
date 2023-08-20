//program to generate fibbbonacci series 

#include <stdio.h>

// Function to generate nth Fibonacci number
int fibonacci(int n) 
{
    if (n <= 1)
	 {
        return n;
    }
    return fibonacci(n-1) + fibonacci(n-2);
}

int main()
 {
    int n, i;

    printf("Enter the number of terms in the Fibonacci series: ");
    scanf("%d", &n);

    printf("Fibonacci Series: ");
    for(i = 0; i < n; i++)
	 {
        printf("%d ", fibonacci(i));
    }
    printf("\n");

    return 0;
}
