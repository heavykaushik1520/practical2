//CHOICE
#include<stdio.h>
int arithmatic_op();
void main()
{   int x,ch,a,b;
    x =	arithmatic_op();
    printf("Enter two numbers A and B : ");
    scanf("%d%d", &a, &b);
    if(ch==1)
	printf("Addition of %d and %d : %d ",a,b,x);
    
	else if(ch==2)
	printf("Substraction of %d and %d : %d ",a,b,x);
    
	else if(ch==3)
	printf("Multiplication of %d and %d : %d ",a,b,x);
    
	else if(ch==4)
	printf("division of %d and %d : %d ",a,b,x);
   
	else if(ch==5)
	printf("Modulus of %d and %d : %d ",a,b,x);
    
 
	
    
}
int arithmatic_op()
{
	int a , b , ch;
//	printf("Enter two numbers A and B respectively : ");
//	scanf("%d%d",&a,&b);

 printf("\nInput your choice to make an operation\n");
    printf("\n1 :: for Addition");
    printf("\n2 :: for Substraction");
    printf("\n3 :: for Multiplication");
    printf("\n4 :: for Division");
    printf("\n5 :: for Modulus");

    printf("\n\nEnter your choice: ");
    scanf("%d", &ch);

    // It will perform operation
    // According to user's choice & print the final output
    printf("\n");
//	
	if(ch==1)
    return a+b;
	else if(ch==2)
    return a-b;
	else if(ch==3)
    return a*b;
	else if(ch==4)
    return a/b;
	else if(ch==5)
    return a%b;

    
	
}
