#include <stdio.h>

double min(double x, double y, double z)
{
    if (x < y){
        if (x < z){
            return x;
        }
    }
    if (y < x){
        if (y < z){
            return y;
        }
    }

    return z;
}

int main(){

  printf("%f\n", min(1.2, 3.4, 1.3));
  return 0;
}
