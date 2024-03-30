#include<stdio.h>
#include<math.h>
void armstrong_inRange(int*,int*);
void main()
{
	int max,result,a ;
	printf("Enter the range : ");
	scanf("%d",&max);
	for(a=1;a<=max;a++)
	{
		armstrong_inRange(&a,&result);
		if(a==result)
		printf("%d\n",a);
	}	
}
void armstrong_inRange(int* n,int* sum)
{  
//   int temp,  r;
//   *sum=0;
//   temp= *n;
//   while(temp)	
//   {
//   		r = temp%10;
//		temp = temp/10;
//		*sum = *sum +(r*r*r);
//		  
//   }
//   
//   
    int temp = *n;
   *sum = 0;
    while (temp) {
        *sum += pow(temp % 10, (int) log10(*n) + 1);
//        *n /= 10;
    }
}

