#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define N 10 /* количество элементов массива */

int main()
{
  int a[] = {11,12,23,14,15,46,27,12};
  int i, j, count, k;    /* счетчик */
  count = 0;
  for(i = 1; i < N; i+=2){

    if(a[i-1]%2==0 && a[i]%2!=0 || a[i-1]%2!=0 && a[i]%2==0){
        count++;
      }
    }
  k = sizeof(a)/sizeof(int) / 2; //k - length of the a
  if(count == k){
    printf("alternate");
  }else{
    printf("Not alternate");
  }
  return 0;
}
