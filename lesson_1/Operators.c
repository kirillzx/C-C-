#include <stdio.h>

int main() {
  int number;
  printf("Enter the number: ");
  scanf("%d", &number);

  if (number % 2 == 0)
    printf("%d - Even\n", number);
  else
    printf("%d - Odd\n", number);
  f1();
  return 0;
}

int f1(void)
{
  int k, j, i;
  printf("Enter the k: ");
  scanf("%d", &k);
  printf("Enter the i: ");
  scanf("%d", &i);
  printf("Enter the j: ");
  scanf("%d", &j);
  if (k < 10)
  {
    if (j > 5) printf("\nj above 5");
    if (i > 5) printf("\ni above 5");
    else printf("\ni less or equal 5");
  if (i > 5) printf("\nk less 10 and i above or equal 5");
  }
  else printf("\nk above or equal 10");
}
