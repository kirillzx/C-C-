#include <stdio.h>
#include <math.h>

int is_prime(int x)
{
    int value = 2;

    if (x == 2){
        return 0;
    }

    while (value <= sqrt(x)){
        if (x % value == 0){
            return 1;
        }
        value++;
    }

    return 0;
}

int main(){
  if (is_prime(24) == 1){
    printf("Your number is not prime\n");
  }else{
    printf("Your number is prime\n");
  }
  return 0;
}
