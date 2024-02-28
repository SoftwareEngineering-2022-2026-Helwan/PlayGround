#include<stdio.h>
#include "./stack.h"
#include "./menu.h"
#include "./calc/calc.h"

// |==========( global variable her )==========|

Stack stack;


// |==========( include your main.c code her )==========|

#include "./runCalc.c"

int main(void)
{
	createStack(&stack);

	int runOption;
    switch (taskMenu())
    {
    case 1:
	    do
	    {
		    runOption = calcOptionMenu();
		    if(runOption != 0)
		    {
			    runCalcOnOption(runOption);
		    }

	    }while(runOption != 0);
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

    }
    return 0;
}

