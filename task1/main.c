#include<stdio.h>
#include "./menu.h"

int main(void)
{

    switch (taskMenu())
    {
    case 1:
        printf("inside Calc\n");
        break;
    case 2:
        printf("inside Unit con\n");
        break;
    case 3: 
        printf("inside Money conv\n");
        break;
    case 4:
        printf("inside Money conv\n");
        break;
    case 5: 
        printf("inside history\n");
        break;

    default:
        break;
    }
    return 0;
}