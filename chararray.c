#include<stdio.h>
void main()
{
	int i ;
	char arr[5] = { 'a' , 'b' , 'c'};
	for(i = 0 ; i < 5; i++)
	{
		if(arr[i] =='\0')
		printf("Hello");
		else
		printf("%c",arr[i]);
	}

}// 
