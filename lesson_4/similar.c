#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define N 10 /* количество элементов массива */

int main()
{
  int a[N]; /* массив a размера N */
  int i, j, count;    /* счетчик */
  srand(time(NULL)); /* начальное значение генератора ПСЧ */
  count = 1;
  for(i = 0; i < N; i++){
    a[i] = rand()%100;
    printf("%d\n", a[i]);
    for(j = 0; j<N;j++){
      if(a[i] == a[j] && i!=j){
        count++;
      }
    }

  }
  printf("\n");
  printf("%d\n", count);
  return 0;
}
