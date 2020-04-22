#include <stdio.h>

int counter = 0;
void f1(void);
void f2(void);

int main(void)
{
    counter = 100;
    f1();
    f2();
    return 0;
}

void f1(void)
{
  int z;
  z = counter;
  printf("counter = %d\n", counter);
}

void f2(void)
{
  int counter = 200;
  printf("counter = %d\n", counter);
}
