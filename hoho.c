#include<stdio.h>
int mystrlen(char*);
void main()
{
	char arr[5] = "abc";
	int i ;
	i = mystrlen(arr);
	printf("Length of array: %d",i);
}
int mystrlen(char* ptr)
 {
 	int i = 0;
 	
 	while(ptr[i]!= '\0')
 	{
 		i++;
	 }
	 return i;
 }
