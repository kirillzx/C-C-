#include <stdio.h>


int reverse(int x){
  int value = 0;

  while (x != 0){
    value *= 10;
    value += x % 10;
    x = x/10;
  }
  return value;
}
int main(){

  printf("%d\n", reverse(12345));
  return 0;
}
