#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define N 10 /* количество элементов массива */

int main()
{
   /* массив a размера N */
  int i, j, n,count;    /* счетчик */
  srand(time(NULL)); /* начальное значение генератора ПСЧ */
  int a[] = {1,2,3,4,5,6,7,8,9,10};
  // a[0] = rand()%100;
  n = a[0];
  count = 1;
  for(i = 1; i < N; i++){
    if(n<a[i]){
      n = a[i];
      count++;
    }

  }
  if (count==10){
    printf("increase", count);
  }else{
    printf("Not increase");
  }
  return 0;
}
