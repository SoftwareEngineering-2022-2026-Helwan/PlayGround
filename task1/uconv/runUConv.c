
void runUCONVonOption(int option){

    int num,conv;
    
    switch(option)
    {
        case 1:
            printf("\nEnter unit in meters : ");
            scanf("%d",&num);

	    /*
	     
	       c doesn't allow multi assign
		ex: 
		  int x = 1;
		but
		int x = 1, 2; // error 


	     */
	    
            conv = M_Cm(num);  // conv = num , M_Cm(num);  //error here [!] fix i  all cases 2 -> 4  
            push(&stack,conv);
            printf("\n%d m = %d cm\n",num,conv); // printf("\n%d m = %d cm\n",conv);   //error here missing num to be printed  [!] fix in all cases 2->4
            break;

        case 2:
            printf("\nEnter unit in centimeters : ");
            scanf("%d",&num);

            conv = Cm_M(num);
            push(&stack,conv);
            printf("\n%d cm = %d m\n",num,conv);
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
