void runCalcOnOption(int option)
{
        int n1, n2;
        if (option != 5)
        {
                printf("[+] Entet Option: ");
        }
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
                        printf("\n");
                        traversStack(&stack,&displayFn);

        }
}
