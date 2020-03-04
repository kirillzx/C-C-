#include <stdio.h>

int main() {
  int x, y, total, count;
  count = 1;
  total = 1;
  scanf("%d %d", &x,&y);
  while(count<=y){
    total *= x;
    count++;
  }

  printf("x power y is %d\n", total);
  return 0;
}
