#include <stdio.h>

int main() {
  int count = 1;
  int total = 0;
  while(count<=10){
    total = total + count;
    count++;
  }

  printf("The sum is %d\n", total);
  return 0;
}
