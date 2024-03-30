//strong number in given range
#include<stdio.h>
void strong_range(int,int);
void main()
{
	int sn , en;
	printf("Enter the minimum number: ");
	scanf("%d",&sn);
	printf("Enter the maximum number: ");
	scanf("%d",&en);
	strong_range(sn,en);
}
void strong_range(int sn ,int en)
{
	printf("\n\nThe Strong numbers are :\n"); 
	int k;
	for(k=sn;k<=en;k++)
   {
     int n1=k;
     int s1=0; 
	 int j; 
 
    for(j=k;j>0;j=j/10) 
    {  
        int i;
        int fact = 1;  
          for(i=1; i<=j % 10; i++)  
           {  
            fact = fact * i;  
           }  
            s1 = s1 + fact;  
    }  
  
    if(s1==n1)  
       
        printf("%d  ", n1); 
  }  
        printf("\n\n"); 
}

