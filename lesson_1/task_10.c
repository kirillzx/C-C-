#include <stdio.h>
#include <math.h>

long int factorial(int number, long int result)
{
    if (number == 1)
    {
        return result;
    }
    else return factorial(number - 1, result*number);
}

double taylor(double x, int n)
{
    double e;
    int i;
    e = 1;
    for (i = 1; i < n + 1; i++){
        e += pow(x, (double) i)/factorial(i, 1);
    }
    return e;
}

int main()
{
   int n;
   double x;

   printf("Enter the power: ");
   scanf("%lf", &x);

   printf("Enter the member of Series: ");
   scanf("%d", &n);

   printf("Approximately value of exp in the power %f is %lf\n", x, taylor(x, n));

   return 0;
}
