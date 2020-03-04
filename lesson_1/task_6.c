#include <stdio.h>

int main() {
  int x, d, count;
  count = 0;
  scanf("%d", &x);
  while(x!=0){
    d = x%10;
    x /= 10;
    if (d == 7){
      count++;
    }
  }

  printf("The quantity of 7 is %d\n", count);
  return 0;
}
