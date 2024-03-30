#include<stdio.h>
void main()
{
	char ch = ' r ';
	printf("%c",ch);
	if (ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u' || ch=='A' || ch=='O' || ch=='U' || ch=='I' || ch=='E')
	{
		printf(" %ch is vowel.",ch);
	}
	else
	{
		printf("%ch in not vowel.",ch);
	}
}
