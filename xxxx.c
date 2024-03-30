#include<stdio.h>

int add();
int sub();
int mul();
int div();
int mod();

void main()
{   

    int ch;
  
   printf("Input the choices to make operations: ");
   printf("\n1 for addition.");
    printf("\n2 for subtraction.");
    printf("\n3 for multiplication.");
    printf("\n4 for quotient.");
    printf("\n5 for remainder.");
   printf("\nEnter your choice: ");
   scanf("%d",&ch);
   printf("\n");
    
    if(ch==1)
    {
    	int x =add();
    	printf("Addition : %d\n", x);
    	
	}
//        printf("Addition of %d and %d : %d\n", a, b, x);
    else if(ch==2)
    {
    	int x=sub();
    	printf("Subtraction : %d\n", x);
    	
	}
        
    else if(ch==3){
    	int x = mul();
    	printf("Multiplication : %d\n", x);
	}
       
    else if(ch==4){
    	int x = div();
    	printf("Division: %d\n", x);
    	
	}
        
    else if(ch==5){
    	int x = mod();
    	 printf("Remainder : %d\n", x);
	}
       
    
}
 
int add(){
	int a,b,c;

    printf("Enter two numbers A and B respectively: ");
    scanf("%d%d", &a, &b);
    c = a+b;
    return c;
}
int sub(){
	int a,b,c;

    printf("Enter two numbers A and B respectively: ");
    scanf("%d%d", &a, &b);
    c = a-b;
    return c;
	
}
int mul(){
	int a,b,c;

    printf("Enter two numbers A and B respectively: ");
    scanf("%d%d", &a, &b);
    c = a*b;
    return c;
}
int div()
{
	int a,b,c;

    printf("Enter two numbers A and B respectively: ");
    scanf("%d%d", &a, &b);
    c = a/b;
    return c;

}
int mod()
{
	int a,b,c;

    printf("Enter two numbers A and B respectively: ");
    scanf("%d%d", &a, &b);
    c = a%b;
    return c;
}
    



