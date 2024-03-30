//armstrong number in given range
#include <stdio.h>
void main(){
    int num,r,sum,temp;
    int stno,enno;

    printf("Input starting number of range: ");
    scanf("%d",&stno);

    printf("Input ending number of range : ");
    scanf("%d",&enno);

    printf("Armstrong numbers in given range are: ");

    for(num=stno;num<=enno;num++){
         temp=num;
         sum = 0;

         while(temp!=0){
             r=temp % 10;
             temp=temp/10;
             sum=sum+(r*r*r);
         }
         if(num==sum)
             printf("%d ",num);
    }
printf("\n");
}

