#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define N 10

int main()
{
    int a[] = {12, 12, 3, 1, 24, 12, 134, 901, 23, 12};
    int i, min, max, pos1, pos2, sum;
    srand(time(NULL));

    for(i = 0; i < N; i++){
        printf("%d ", a[i]);
    }
    printf("\n");

    for(i = 0; i < N; i++){
        if (a[i] > a[max]){
            max = i;
        }
        if (a[i] < a[min]){
            min = i;
        }
    }

    if (max > min){
        pos1 = min;
        pos2 = max;
    }
    else{
        pos1 = max;
        pos2 = min;
    }
    sum = 0;
    for(i = pos1 + 1; i < pos2; i++){
        sum += a[i];
    }

    printf("Sum of elements between minimum and maximum: %d\n", sum);

    return 0;
}
