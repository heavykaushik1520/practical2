#include<stdio.h> 
void factorial(int*); 
void main()
    { 
        int a=5, fact; 
        fact = factorial(&a); 
        printf("Factorial is : %d",fact); 
    } 
    void factorial(int* num){ 

    int loop=*num; 
    int* x = 1;
    for(loop;loop>0;loop--)
 
        { 
           *x =(*x) * loop; 
        } 
}
