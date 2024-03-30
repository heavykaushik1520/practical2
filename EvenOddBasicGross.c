#include<stdio.h>
void main()
{
    int a,ch ;
    printf("Enter number :");
    scanf("%d",&a);
    float basic , hra , da , ta , gross ;
    printf("Enter the basic salary : ");
    scanf("%f",&basic);

    // your choice
    printf("Input your choice: \n");
    printf("\n1.EvenOdd");
    printf("\n2.Basic Salary\n");
    
    printf("Enter your choice : ");
    scanf("%d",&ch);
    
    
    
    if(ch==1)
    {
//        if(a%2==0)        }
          (a%2==0)?(printf("It is even number.",a)):(printf("It is odd number.",a));
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
