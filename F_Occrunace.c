#include<stdio.h>
//void Frequency(int , int , int);
void Frequency(int arr[], int visited[] , int n)
{
 int i , j , count , t = 1;
    for(i = 0; i < n; i++)
    {
        if(visited[i] == 1)
            continue;
        count = 1;
        for(j = i + 1; j < n; j++)
        {
            if(arr[i] == arr[j])
            {
                count++;
                visited[j] = 1;
            }
        }
        
        printf("%d : %d found %d times in array\n", t ,arr[i], count);
        ++t;
       
    }
    

}


void Ascending(int arr[], int n)
{
	int temp , i , j;
	printf("Array in Ascending Order :");
	for(i = 0 ; i < n ; i++)
	{
		for(j = i + 1 ; j < n ; j++)
		{
			if(arr[i] > arr[j])
			{
				temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;
			}
		}
	}
	for(i = 0 ; i < n ; i++)
	{
		printf("%d ",arr[i]);
	}
}

void main()
{
    int i, n, j;
    printf("Enter the size of array: ");
    scanf("%d", &n);
    int visited[n];
    int arr[n];
    for(i = 0; i < n; i++)
    {
        printf("Enter a[%d]: ", i);
        scanf("%d", &arr[i]);
        visited[i] = 0;
    }
    Ascending(arr , n);
    printf("\n\n");
    Frequency(arr , visited , n);
}

