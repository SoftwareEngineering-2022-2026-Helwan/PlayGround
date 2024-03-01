
#include "./calc.h"


int add(int n1, int n2)
{
	return n1 + n2; 
}

int sub(int n1, int n2)
{
	return n1-n2; 
}


int mul(int n1, int n2)
{
	return n1*n2;
}

int n2NotZero(int n)
{
	return n == 0 ? 0: 1;
}

float div(int n1, int n2)
{
	if(n2NotZero(n2))
	{
		return (1.0*n1)/n2;
	}
	return -1.0;
}



