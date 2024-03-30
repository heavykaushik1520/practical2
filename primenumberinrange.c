#include<stdio.h>
void main(){
    int num,i,count,stno,enno;

    printf("Input starting number of range: ");
    scanf("%d",&stno);

    printf("Input ending number of range : ");
    scanf("%d",&enno);
    printf("The prime numbers between %d and %d are : \n",stno,enno);
  
    for(num = stno;num<=enno;num++)
       {
         count = 0;

         for(i=1;i<=num;i++)
            {
             if(num%i==0)
                 count++;
            }
                
             
            if(count==2)
            printf("\n %d ",num);
              
        	
        }
      printf("\n");    
}
