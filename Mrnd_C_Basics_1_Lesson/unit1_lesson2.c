

#include <stdio.h>
#define __FILL_THIS__ ;
#define __FILL_THIS_BLOCK__ ;

int main(){

    //Q1) Output of below code sample

    int i=0;
    for(i=0;i<10;i++){
        printf("%d ",i);
    }
    printf("\n");

    //Q2) Output of below code sample ,and Why?
    while(i<15){
        printf("%d ",i);
        i++;
    }
    printf("\n");


    //TASK 1 :correct the below program such that it wont go into an infinite loop ,Uncomment and run

    
    i=1;
    while(i <10){
        printf("I value is %d\n",i);
        i=i+2;
    }
    

    //Q4)What does below Code print .
    i=0;
    int j=0;
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            printf("I -%d ,J -%d\n",i,j);
        }
    }
   printf("\n");
    //Q5)What does below Code print .First Correct it and then run .

    i=0;
    j=0;
    for(i=0;i<3;i++){
        for(j=3;j>=0;j--){
            printf("I -%d ,J -%d\n",i,j);
        }
    }
    

    //Q6) What does below code does ? ,How many Times the Loop is running

    
    i=0;
   /* while(i<10){
        char letter;
        scanf("%c",&letter);
        printf("%c = %d\n",letter,letter);
        i++;
    }
    */
    //Task 2 ) What does that = 10 suggest in the code above ? How will you correct it ,So that it takes input 10 times ?
    //Tip : Read how fflush(stdin) works , and why to Use it ?

    //Task 3 : Write a program which consists of a while loop ,which reverses the given number and copies the reversed number into
    // reverse
    int number;
    int reverse=0;
    int rem,num;
    scanf("%d",&number);
    num=number;
    while(number>0){
        rem=number%10;
        reverse=reverse*10+rem;
        number=number/10;
    }
    number=num;

    printf("Reverse of %d is %d\n",number,reverse);

    return 0;
}

/*
Answers
1)0123456789
2)10 11 12 13 14 ...already i vlaue is 10 and in oour while condition is i<15 so upto 14 will be printed from 10
3)queston 3 is not found!
4)
I -0 ,J -0
I -0 ,J -1
I -0 ,J -2
I -1 ,J -0
I -1 ,J -1
I -1 ,J -2
I -2 ,J -0
I -2 ,J -1
I -2 ,J -2

  will be printed!
5)

I -0 ,J -3
I -0 ,J -2
I -0 ,J -1
I -0 ,J -0
I -1 ,J -3
I -1 ,J -2
I -1 ,J -1
I -1 ,J -0
I -2 ,J -3
I -2 ,J -2
I -2 ,J -1
I -2 ,J -0
6)it loops 10 times..and it takes character as input and then prints it character as well unicode 
7) questons not found!
8)
9)
10)

*/

//Further Practice Questions : http://www.cquestions.com/2012/02/looping-questions-in-c-and-answers.html [MUST]
