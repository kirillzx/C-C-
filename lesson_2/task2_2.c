#include <stdio.h>

int main(){
  int num, min, digit, count;
  count = 1;
  scanf("%d\n", &num);
  while (count<=num) {
    scanf("%d\n", &digit);
    if (count==1){
      min = digit;
    }else if(digit<min){
      min = digit;
    }
    count++;
  }
  printf("%d\n", min);
  return 0;
}
