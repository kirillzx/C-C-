#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define N 10 /* количество элементов массива */

int main()
{
  int a[N]; /* массив a размера N */
  int i, pos;    /* счетчик */
  double m, n;
  srand(time(NULL)); /* начальное значение генератора ПСЧ */
  m = 32.6;
  n = m;
  for(i = 0; i < N; i++){
    a[i] = rand()%100;
    printf("%d\n", a[i]);
    if(abs(m-a[i])<n){
      n = abs(m-a[i]);
      pos = i;
    }


  }
  printf("\n");
  printf("%d\n", a[pos]);
  return 0;
}
