#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define N 10

int main()
{
  int a[] = {1,2,3,4,5,5,4,3,2,1};
  int i;

  for (i=0;i<N;i++){
    if(a[i] != a[N-1-i]){
      printf("Not symmetric\n");
      return 1;
    }
  }
  printf("symmetric\n");
  return 0;
}
