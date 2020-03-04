#include <stdio.h>
#include <math.h>

int gcd(int x1, int x2){

  int value = 0;

  while(x1!=x2){
    if(x1>x2){
      value = x1;
      x1=x2;
      x2 = value;
    }
    x2 -= x1;
  }
  return x1;
}

int main(){

  printf("%d\n", gcd(24, 202));
  return 0;
}
