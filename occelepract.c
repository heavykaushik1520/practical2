//screen visible h?

#include<stdio.h>
void main() {
    int n, i, j, count;
    
    printf("Size of Array: ");
    scanf("%d", &n);
    
    int occ[1000]={0}; // This will give u runtime error if array element >= 1000 i. e <1000 is maximum number ==>> limit
    // freq che problems madhye map use kraycha generally
    int arr[n];
    // vector, set, map, pair
    printf("Array: ");
    for (i = 0; i < n; i++) 
	{
        scanf("%d", &arr[i]);
        
    }
    for(i = 0; i < n; i++)
	{
    	occ[arr[i]]++;
	}
	 printf("Occurrence of elements in the array:\n");
    for (i = 0; i < 1000; i++) 
	{
        if (occ[i] != 0) 
		{
            printf("%d occurs %d times.\n", i, occ[i]);
        }
    }
}

    
    
    
    
    
	//continue >> line 17
	// 1,5,6,5,5,7 
//	occ =>
//	0 => 0
//	1 => 1
//	2 => 0
//	3 => 0
//	4 => 0
//	5 => 0 ; 1 ; 2; 3 ;
//	6 => 1
//	7 => 1 ;
//	... 
		
 
   
    
    


