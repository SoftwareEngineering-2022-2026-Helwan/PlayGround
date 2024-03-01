
void runUCONVonOption(int option){

    int num,conv;
    
    switch(option)
    {
        case 1:
            printf("\nEnter unit in meters : ");
            scanf("%d",&num);

            conv = num,M_Cm(num);
            push(&stack,conv);
            printf("\n%d m = %d cm\n",conv);
            break;

        case 2:
            printf("\nEnter unit in centimeters : ");
            scanf("%d",&num);

            conv = num,Cm_M(num);
            push(&stack,conv);
            printf("\n%d cm = %d m\n",conv);
            break;


        case 3:
            printf("\nEnter unit in hours : ");
            scanf("%d",&num);

            conv = Hr_Min(num);
            push(&stack,conv);
            printf("\n%d hr = %d mins\n",num,conv);
            break;


        case 4:
            printf("\nEnter unit in minutes : ");
            scanf("%d",&num);

            conv = Min_Hr(num);
            push(&stack,conv);
            printf("\n%d mins = %d hr\n",num,conv);
            break;

        case 5:
            printf("\n");
            traversStack(&stack,&displayFn);
        
    }



}