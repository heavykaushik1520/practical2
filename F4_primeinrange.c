// https://www.geeksforgeeks.org/c-program-to-check-prime-number/
#include<stdio.h>
#include <stdbool.h>
bool isPrime(int);
void main() {
    int stno, enno,i; // startNum
    printf("Enter the start number: ");
    scanf("%d", &stno);
    printf("Enter the ending number: ");
    scanf("%d", &enno);
    for(i = stno; i <= enno; i++)
    {
       if(isPrime(i)){
       	printf("%d ", i);
	   }
	}
}
// 100 => 10
bool isPrime(int n){
	if(n == 1)
		return false;
	int i;
	for(i = 2; i <= n / 2; i++){
		if(n % i == 0){
			return false;
		}
	}
	return true;
}

//int prime_range(int num) 
//{
//    int i, flag=0;
//    
//        
//	     int a=num;
//        
//        for (i = 2; i <= a/2;i++) 
//		{
//            if (a% i == 0){
//			
//                flag=1;
//                break;
//            }
//        }
//        if (flag==0)
//		{
//            
//            return num;
//        }
//    
//    //seive of Eratosthenes, find prime nums till n
//}
