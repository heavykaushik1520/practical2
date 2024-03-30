#include<stdio.h>
void main()
{
	int a,b,c;
	printf("Enter the numbers :");
	scanf("%d%d%d",&a,&b,&c);
	(a>b)?((a>c)?printf("The greatest no :%d",a):printf("The greatest no :%d",c)):((b>c)?printf("The greatest no :%d",b):printf("The greatest no :%d",c));
}
