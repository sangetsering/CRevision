//program to evaluate the value of sin function

#include <stdio.h>
#include <math.h>

double sin_series(double x, double tol) 
{
    double term = x;
    double sin_approx = term;
    int i = 1;

    while (fabs(term) > tol) {
        term *= -1 * x * x / ((2 * i) * (2 * i + 1));
        sin_approx += term;
        i++;
    }

    return sin_approx;
}

int main() 
{
    double x;
    printf("Enter the value of X: ");
    scanf("%lf",&x);
    x = x*(3.14/180);
    printf("Approximated sin(%f) = %f\n", x, sin_series(x, 0.0001));
    printf("Exact sin(%f) = %f\n", x, sin(x));

    return 0;
}
