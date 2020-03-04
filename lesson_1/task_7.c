#include <stdio.h>

double diam(double r){
  double diameter;
  diameter = 2*r;
  printf("Diameter is %f\n", diameter);
}

double peremeter(double r, double p){
  double perem;
  perem = 2*p*r;
  printf("Peremeter is %f\n", perem);
}

double area(double r, double p){
  double ar;
  ar = p*r*r;
  printf("Area is %f\n", ar);
}

int main() {
  double r, p;
  p = 3.14159;
  scanf("%lf", &r);

  diam(r);
  peremeter(r, p);
  area(r, p);
  return 0;
}
