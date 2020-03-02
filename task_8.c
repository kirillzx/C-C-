#include <stdio.h>

long int factorial(int number, long int result)
{
    if (number == 1)
    {
        return result;
    }
    else return factorial(number - 1, result*number);
}

int main()
{
   int number;
   number = 0;

   scanf("%d", &number);

   printf("The factorial is %d: %ld\n", number, factorial(number, 1));

   return 0;
}
