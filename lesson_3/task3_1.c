#include <stdio.h>
#include <math.h>

double distance(int x1, int y1, int x2, int y2){
  double dist;
  dist = sqrt((x1-x2)*(x1-x2) + (y1-y2)*(y1-y2));
  return dist;
}

int main(){

  printf("%f\n", distance(4, 3, 0, 0));
  return 0;
}
