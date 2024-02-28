#include<stdio.h>
#include "./menu.h"
#include "./calc/calc.h"

void runCalcOnOption(int option);

int main(void)
{

    switch (taskMenu())
    {
    case 1:
	    runCalcOnOption(calcOptionMenu());
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




void runCalcOnOption(int option)
{
	printf("[+] Entet Option: ");
        switch(option)
	{
		case 1:
			
			printf("\nEnter num1 : ");
			int n1;
			scanf("%d",&n1);

			printf("Enter num2 : ");
                	int n2;
                	scanf("%d",&n2);
                
			printf("[=]result: %d + %d = %d\n",n1,n2,add(n1,n2));
			break;
		case 2:

                        printf("\nEnter num1 : "
);
                        int n1;                                         scanf("%d",&n1);
                                                                        printf("Enter num2 : ");
                        int n2;                                         scanf("%d",&n2);
                        printf("[=]result: %d -
%d = %d\n",n1,n2,sub(n1,n2));
                        break;
		case 3:

                        printf("\nEnter num1 : "
);
                        int n1;                                         scanf("%d",&n1);
                                                                        printf("Enter num2 : ");
                        int n2;                                         scanf("%d",&n2);
                        printf("[=]result: %d *
%d = %d\n",n1,n2,mul(n1,n2));
                        break;
			
		case 4:

                        printf("\nEnter num1 : "
);
                        int n1;                                         scanf("%d",&n1);
                                                                        printf("Enter num2 : ");
                        int n2;                                         scanf("%d",&n2);
                        printf("[=]result: %d /
%d = %2f\n",n1,n2,div(n1,n2));
                        break;
		case 5:
			printf("history");
			
	}
}
