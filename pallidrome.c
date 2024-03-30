//#include<stdio.h>
//void main()
//{
//	int no,rem , reverse =0;
//	int temp = no ;
//
//	printf("Enter the number :");
//	scanf("%d",&no);
//	while(no > 0)
//	{
//		rem = no % 10;                //141%10=1             14%10=4        1%10=1
//	reverse = reverse*10 + rem ;      // rev = 0*10 + 1       1*10+4=14      14*10+1=1
//	    no = no / 10 ;                 //no = 14              no =1           
//	}
//	if(reverse == temp)
//	
//		printf("The given number is Pallindrome");
//	
//	else
//	
//		printf("The given number is not Pallindrome");
//	
//	
//	
//}
#include<stdio.h>
void main()
{
    int no, rem, reverse = 0;
    int temp;

    printf("Enter the number: ");
    scanf("%d", &no);

    temp = no;

    while (no > 0)
    {
        rem = no % 10;                //141%10=1             14%10=4        1%10=1
        reverse = reverse * 10 + rem; // rev = 0*10 + 1       1*10+4=14      14*10+1=1
        no = no / 10;                 //no = 14              no =1           
    }

    if (reverse == temp)
        printf("The given number is Pallindrome");
    else
        printf("The given number is not Pallindrome");
}

