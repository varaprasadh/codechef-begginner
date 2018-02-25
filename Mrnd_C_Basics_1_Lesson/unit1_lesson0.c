#include <stdio.h>
#define __FILL_THIS__ ;

int main(){

    int a,b;
    int temp=10;
    //Q0)What does below line print ? 
    
    printf("Temp value is %d\n",temp);
    //Q1)What Does below printf Print and why ?
    //A2)
    printf("%d,%d\n",a,b);

    a=5;

    //Q2)What Does below printf Print and why ?
    //A3)
    printf("%d\n",a);

    //Take an integer as input from keyboard and store it in b. Hint : Use scanf
    scanf("%d",&b);

    //Print the B value .
    printf("%d\n",b);


    int sum=0;
    //Calculate sum of a and b and store it in sum
    sum=a+b;

    //PRINT SUM
    printf("%d\n",sum);

    //Q3)What does the below line do ? why

    printf("%4d\n",sum);
    //Q4)Does below line work ? , Uncomment and check and why ?
    //float a=7.65;
    float f1=7.65765;

    //Try printing a float value (f1)
    __FILL_THIS__

    //q5)What does the below line do , why ?
    printf("%.2f\n",f1);

    char c='a';
    //Print the above character
    __FILL_THIS__

    //q6)What does below line print ? why ?
    printf("%d\n",c);

    char oneChar='1';

    //q7)What does below line print ? why ? Observe clearly what is printing
    printf("%c = %d\n",oneChar,oneChar);

    int oneInt;

    //Now copy value 1 into oneInt using oneChar ,(Hint:49 is 1 ,50 is 2 . Think)

    return 0;
}

/*
Answers :
0)It prints "Temp value is 10", because temp is assigned to 10 ,in prev line .
1)prints some garbage values as we didn't assigned any vlaues
2)pritns 5 because we have assigned value 5 to variable 'a'
3)it ll print  spaces before actual variable..so it take printing part as 4 columns ..depending on size of sum..it ll change
4)given a error..because a is already defined as int datastructure.
5)it ll round the decimal value..prints only 2 rounded digits after decimal point;
6)it ll print unicode for character 'a'..and is equal to 97;
7)'onechar' is type of char and assigned a value '1' as character..%c will tend to print it as 1
  but %d is casting it to int by which it ll be converted to equal ascii code which is equal to 49
*/
