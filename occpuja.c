//Write a c program to print occurance of all elements in array
#include <stdio.h>

void main()
{
	int num, i, j, count;
	printf("Enter the size of array: \n");
	scanf("%d", &num);
	int arr[num];
	int occur[num];
	printf("Enter the elements of array: \n");
	for (i = 0; i < num; i++)
	{
		scanf("%d", &arr[i]);
		occur[i] = 0;
	}

	//  for(i = 0; i < num; i++) {
	//    count = 1;
	//    for(j = i+1; j < num; j++) {
	//      if(arr[i] == arr[j]) {
	//          occur[j] = 0;
	//          
	//        count++;
	//      }

	//    }

	//    if(occur[i])
	//      occur[i] = count;
	//  }

	for (i = 0; i < num; i++)
	{
		if (occur[i] == 0)
		{
			occur[i] = 1;
			for (j = i + 1; j < num; j++)
			{
				if (arr[i] == arr[j])
				{
					occur[i]++;
					occur[j] = -1;
				}
			}
		}
	}

	printf("  Element    Frequency\n");
	for (i = 0; i < num; i++)
	{
		if (occur[i] != 0 && occur[i] != -1)
		{
			printf("    %d", arr[i]);
			printf("    |  ");
			printf("    %d\n", occur[i]);
		}
	}
}
