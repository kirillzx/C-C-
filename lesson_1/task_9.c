#include <stdio.h>

long int factorial(int number, long int result)
{
    if (number == 1)
    {
        return result;
    }
    else return factorial(number - 1, result*number);
}

double taylor(int n)
{
    double e;
    int i;
    e = 1;
    for (i = 1; i < n + 1; i++){
        e += (double) 1/factorial(i, 1);
    }
    return e;
}

int main()
{
   int n;

   printf("Enter the member of the Series: ");
   scanf("%d", &n);
   printf("approximate value of еxp is: %lf\n", taylor(n));

   return 0;
}
