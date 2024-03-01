
void runMconvOnOption(int option)
{
        double n1;
if(option==1){
    printf("enter money :  ");
    scanf("%f",n1);
    double x;
    x=coverttodollar(n1);
     push(&stack, x);
     printf("eg %f--> doll %f",n1,x)}
else if (option==2){
    printf("enter money :  ");
    scanf("%f",n1);
    double x;
    x=coverttopound(n1);
     push(&stack, x);
     printf("doll %f--> eg %f",n1,x)}

 else if (option==3){
    printf("enter money :  ");
    scanf("%f",n1);
    double x;
    x=coverttoSAR(n1);
     push(&stack, x);
     printf("Euro  %f--> Sar %f",n1,x)}

else if (option==4){
    printf("enter money :  ");
    scanf("%f",n1);
    double x;
    x=coverttoEUR(n1);
     push(&stack, x);
     printf("SAr  %f--> Euro %f",n1,x)}
else{
    printf("\n");
    traversStack(&stack,&displayFn);
}
}

