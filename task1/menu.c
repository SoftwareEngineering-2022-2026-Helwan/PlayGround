#include "./menu.h"

int validateInputTo(int min, int max)
{
    int num;

    do
    {
        scanf("%d",&num);
    
    } while (num < min || num > max );

    return num;
}

int taskMenu()
{
    printf("Choose Task :\n");
    printf("1) Calculator\n");
    printf("2) Unit Converter\n");
    printf("3) Money Converter\n");
    printf("4) Counter\n");
    printf("5) History\n");
    
    
    return validateInputTo(1,5);
}

int calcOptionMenu()
{
    printf("Choose Operation :\n");
    printf("1) Add\n");
    printf("2) Subtract\n");
    printf("3) Multiply\n");
    printf("4) Divide\n");
    printf("5) History\n");

    return validateInputTo(1,5);    

}


int unitConvOptionMenu()
{
    printf("Choose Operation :\n");
    printf("1) M --> Cm\n");
    printf("2) Cm --> M\n");
    printf("3) Hr --> Min\n");
    printf("4) Min --> Hr\n");
    printf("5) History\n");

    return validateInputTo(1,5);    

}



int moneyConvOptionMenu()
{
    printf("Choose Operation :\n");
    printf("1) Eg --> Usd\n");
    printf("2) Usd --> Eg\n");
    printf("3) Euro --> Sar\n");
    printf("4) Sar --> Euro\n");
    printf("5) History\n");

    return validateInputTo(1,5);    

}



