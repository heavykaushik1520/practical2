#include<stdio.h>
void main()
{
	int a,ch ;
	float basic , hra , da , ta , gross ;
	printf("Enter number :");
	scanf("%d",&a);
	printf("Enter the basic salary : ");
	scanf("%.2f",&basic);
	
	// your choice
	printf("\nInput your choice to make an operations");
	printf("\n1:: For EvenOdd");
	printf("\n2:: For Basic Salary\n");
	
	printf("Enter your choice : ");
	scanf("%d",&ch);
	
	
	
	if(ch==1)
	{
		if(a%2==0)
		{
			printf("It is even number.",a);
		}
		else
		{
			printf("It is odd number",a);
		}
	}
    else if(ch==2)
	 {
	if(basic <= 5000)
       {
        da  = basic * 0.1;
        ta  = basic * 0.2;
        hra = basic * 0.25;
       }
    
    else
       {
        da  = basic * 0.15;
        ta  = basic * 0.25;
        hra = basic * 0.30;
	
       }
     
     /* Calculate gross salary */
    gross = basic + hra + da - ta ;

    printf("GROSS SALARY OF EMPLOYEE = %.2f", gross);
    }
}

