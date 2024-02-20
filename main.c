#include <stdio.h>
#include "./mylib.h"

int main(void)
{
    printf("5+5 = " , add(5,5));
    printf("5-5 = " , sub(5,5));
    printf("5x5 = " , mul(5,5));
    printf("5/5 = " , div(5,5));

    return 0;
}