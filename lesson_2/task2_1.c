#include <stdio.h>

int main(){
  int num, total, digit, count;
  count = 1;
  total = 0;
  scanf("%d\n", &num);
  while (count<=num) {
    scanf("%d\n", &digit);
    total += digit;
    count++;
  }
  printf("%d\n", total);
  return 0;
}
