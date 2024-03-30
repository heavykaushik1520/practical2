 #include<stdio.h>
 void main()
{
    int firstNum, secondNum;

    printf("Enter a two digit number: ");
    scanf("%d%d", &firstNum,&secondNum);

    if (firstNum == 1 && secondNum == 0){
            printf("You entered the number ten\n");}
    if (firstNum == 1 && secondNum == 1){
                printf("You entered the number eleven\n");}
    if (firstNum == 1 && secondNum == 2){
                printf("You entered the number twelve\n");}
    if (firstNum == 1 && secondNum == 3){
                printf("You entered the number thirteen\n");}
    if (firstNum == 1 && secondNum == 4){
                printf("You entered the number forteen\n");}
    if (firstNum == 1 && secondNum == 5){
                printf("You entered the number fifteen\n");}
    if (firstNum == 1 && secondNum == 6){
                printf("You entered the number sixteen\n");}
    if (firstNum == 1 && secondNum == 7){
                printf("You entered the number seventeen\n");}
    if (firstNum == 1 && secondNum == 8){
                printf("You entered the number eighteen\n");}
    if (firstNum == 1 && secondNum == 9){
                printf("You entered the number nineteen\n");}
    switch(firstNum)
	{
        case 2: printf("You entered the number twenty-");break;
        case 3: printf("You entered the number thirty-");break;
        case 4: printf("You entered the number forty-");break;
        case 5: printf("You entered the number fifty-");break;
        case 6: printf("You entered the number sixty-");break;
        case 7: printf("You entered the number seventy-");break;
        case 8: printf("You entered the number eighty-");break;
        case 9: printf("You entered the number ninty-");break;
        
        
    }
    switch (secondNum)
	{
        case 1: printf("one.\n");break;
        case 2: printf("two.\n");break;
        case 3: printf("three.\n");break;
        case 4: printf("four.\n");break;
        case 5: printf("five.\n");break;
        case 6: printf("six.\n");break;
        
    }
	
}

