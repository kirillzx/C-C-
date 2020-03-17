#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define N 10

int count_digit(char *str){
  int count = 0;

  for (int i = 0; i < N; i++){

    if(str[i] == '0' || str[i] == '1' || str[i] == '2' || str[i] == '3' || str[i] == '4'
  || str[i] == '5' || str[i] == '6' || str[i] == '7' || str[i] == '8' || str[i] == '9'){
      count++;
    }
  }
  return count;
}

int main()
{
  printf("%d\n", count_digit("e213fff122"));
  return 0;
}
