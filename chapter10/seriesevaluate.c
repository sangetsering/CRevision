//program to evaluate the series uisng recursive method [x-x^3/3! + X^5/5!-X^7/7!+.....]

#include <stdio.h>

double factorial(int n)
 {
    if (n == 0 || n == 1)
	 {
        return 1;
    }
    return n * factorial(n - 1);
}

double f(double x, int n, int maxterms)
 {
    if (maxterms == 0)
	 {
        return 0;
    }
    
    double term = (n % 2 == 0 ? -1 : 1) * (pow(x, 2 * n - 1) / factorial(2 * n - 1));
    return term + f(x, n + 1, maxterms - 1);
}

int main()
 {
    double x;
    int terms;

    printf("Enter the value of x: ");
    scanf("%lf", &x);

    printf("Enter the number of terms: ");
    scanf("%d", &terms);

    printf("Value of f(x) = %lf\n", f(x, 1, terms));

    return 0;
}
