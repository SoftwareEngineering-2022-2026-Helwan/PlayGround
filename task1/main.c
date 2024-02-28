#include<stdio.h>
#include "./stack.h"
#include "./menu.h"
#include "./calc/calc.h"

//global variable here

Stack stack;


void displayFn(StackEntity);
void runCalcOnOption(int option);

int main(void)
{
	createStack(&stack);

    switch (taskMenu())
    {
    case 1:
	    runCalcOnOption(calcOptionMenu());
	    traversStack(&stack,&displayFn);
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


void displayFn(StackEntity item)
{
	printf("item: %d",item);
}



void runCalcOnOption(int option)
{
	int n1, n2;
	printf("[+] Entet Option: ");
        switch(option)
	{
		case 1:
			
			printf("\nEnter num1 : ");
			scanf("%d",&n1);

			printf("Enter num2 : ");
                	scanf("%d",&n2);
			int addR = add(n1,n2);
			push(&stack, addR);
			printf("[=]result: %d + %d = %d\n",n1,n2,addR);
			break;
		case 2:

                        printf("\nEnter num1 : ");
			scanf("%d",&n1);
                                                                        
			printf("Enter num2 : ");
                                                                 
			scanf("%d",&n2);
                
			int subR = sub(n1,n2);
			push(&stack,subR);
			printf("[=]result: %d - %d = %d\n",n1,n2,subR);
                        break;
		case 3:

                        printf("\nEnter num1 : ");
                                                              
			scanf("%d",&n1);
                                                                        
			printf("Enter num2 : ");
                                                               
			scanf("%d",&n2);
                       
			int mulR = mul(n1,n2);
			push(&stack, mulR);
			printf("[=]result: %d * %d = %d\n",n1,n2,mulR);
                        break;
			
		case 4:

                        printf("\nEnter num1 : ");
                                        
			scanf("%d",&n1);
                                                                        
			printf("Enter num2 : ");
                                                                
			scanf("%d",&n2);
                        float divR = div(n1,n2);
			push(&stack, (int) divR);

			printf("[=]result: %d / %d = %2f\n",n1,n2,divR);
                        break;
		case 5:
			printf("history");
			
	}
}
