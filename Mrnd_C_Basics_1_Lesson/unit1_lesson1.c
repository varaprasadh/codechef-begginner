#include <stdio.h>
#define __FILL_THIS__ ;

int main(){

    int grade;
    printf("grade: ");
    scanf("%d",&grade);
    if(grade>70){
        printf("DISTINCTION\n");
    }
    else if(grade<=70 &&grade>=40){
        printf("AVERAGE");
    }
    else {
        printf("FAIL");
    }

    //Take input from keyboard into grade .

    /*
        TASK1: WRITE a if ,else if ,else blocks which prints DISTINCTION if grade is >70 , AVERAGE if <=70 and >40 , FAIL if <=40.

    //Q1)Code Sample 1 : What does below code print .Why ?
    */
    int x=22;
    if(x=10){
        printf("TRUE\n");
    }
    else{
        printf("FALSE\n");
    }


    int color=0;
    //TAKE input into color
    printf("color: ");
    scanf("%d",&color);
    switch(color){
        case 0: printf("Nothing\n"); break;
        case 1: printf("RED\n"); break;
        case 2: printf("BLUE\n"); break;   
        case 3: printf("GREEN\n"); break;
        default: printf("Invalid Value entered\n"); 
    }

    /*
    TASK 2 : Write a switch case block which prints "Nothing" if 0 is entered ,"RED" for 1 ,"BLUE" for 2 ,"GREEN" for 3 .and anything
    above 3 will print "Invalid Value entered "
    */


    /*
        Q2)Code Sample 2 :What does the below code print why ?
    */
    char test='b';

    switch(test){
        case 'a':printf("A\n"); break;
        case 'b':printf("B\n"); break;
        case 'c':printf("C\n"); break;
        case 'd':printf("D\n"); break;
        default:printf("Default\n"); break;

    }


    /*
        Shouldnt it print only B ? can you correct the above program ?
    */



    /*
        TASK 3 : Can you write a program to find if a letter is Consonant or vowel ?
        Hint : Use && , or combine multiple switch cases .
    */

    char letter;
    printf("letter: ");
    scanf("%c",&letter);

     switch(letter){
        case 'a': 
        case 'e': 
        case 'i': 
        case 'o': 
        case 'u': printf("letter %c is vowel",letter); break;
        default:  printf("letter %c is Consonant",letter); break;
     }

    
}

/*
Answers :
1)prints 'false'..cause x is not equal to 22 then else block will be executed..

2) prints "B" followed by C and D and Default ..we have char variable test assigned with value 'b' so case "b" statement will execute..and there is no break statement then all remaining cases will execute after case b;
*/
