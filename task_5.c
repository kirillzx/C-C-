#include <stdio.h>

int main() {
  int x, d1, d2, d4, d5;
  scanf("Enter the digit %d", &x);
  d1 = x / 10000;
  d2 = x / 1000 % 10;
  d4 = x % 100 / 10;
  d5 = x % 10;
  printf("%d %d %d %d", d1, d2, d4, d5);
  if (d1 == d5 && d2 == d4){
    printf("Your digit is the palindrome\n");
  }
  else{
    printf("Not palindrome\n");
  }
  return 0;
}
