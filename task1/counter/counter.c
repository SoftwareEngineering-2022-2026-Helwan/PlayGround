#include "./counter.h"
#include <stdio.h>

void count_to(int num) {
    int i;
        for (i = 1; i <= num; i++) {
        printf("%d \n", i);
    }
    printf("\n");
}
