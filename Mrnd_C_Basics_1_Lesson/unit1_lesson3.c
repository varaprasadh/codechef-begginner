
#include <stdio.h>
#define __FILL_THIS__ ;


void isPrime(int number);
int reverseNum(int number);

//Function Prototypes
void fun1();
void fun2();
void fun3();

//fun4 is a function which takes 1 integer as a param
void fun4(int a);
void fun5(int y);
int fun6();

//print sum is a function which takes two integers as parameters
void printsum(int a,int b);
int getsum(int a,int b);
int main(){

    //Understand how below 3 lines work
    printf("Calling Function 1\n");
    fun1();
    printf("Function 1 Over\n\n");

    //Q1) What does function 2 does , ?uncomment and run and check
    //fun2();

    /*
        So function is just some piece of Code which has a name and will execute when you call it with its name,
        So if there are similiar blocks of Code ,you can copy that into a function and just call it .
        It saves you time as you dont need to write those lines again and again .
        You can observe that by uncommenting below lines
    */

    fun3();
    fun3();

    //q2) what does the above 2 lines does ?

    //Passing Parameters to Functions .
    /*
        If you observe fun2 , inside the function we took input for 2 variables and calculated its sum and printed it
        What if you dont want to take input inside the function , You already have the values (which you might have got
        from somewhere else ) ,You need a way through which you pass certain information to a function ,
        the function does its job using that information you gave .
        This is done in C using function parameters .
    */
    fun4(123);
    //q3) What does above line print ?

    int x=512;
    fun4(x);
    //q4)What does above line print ?

    int y=100;
    printf("Y value before calling fun5 is %d\n",y);
    fun5(y);
    printf("Y value after calling fun5 is %d\n",y);

    //q5)What happens in the above code ? Why doesn't Y value change ?
    //q6) What does below line print ?
    printsum(5,65);

    /*
        Now you understood how your main function can pass data to functions ,Its just 1 way communication
        Now what if you want some data back from functions , This can be done using return statements .

        You will understand this more by this simple example .
        There is a teacher and some students , Teacher has several tasks on his hand like Adding numbers ,Multiplying numbers
        etc ,But the teacher doesent want to do all on his own , He calls a particular student 1 ,Gives him the 2 numbers
        to add , (Done through params ) ,The students does his job , and says back the answer to teacher (This is called returning
        the data from functions)

        Now if you modelled your functions in such a way that ,instead of printing the result it calculates ,It returns the result ,
        Then those functions can be more useful ,the returned data can be sent to some other functions and can be done some more
        operations on it .
    */
    int returned_value=fun6();
    printf("Returned value from fun6 is %d\n\n",returned_value);
    //q7)what does above function print ?

    //Task 1: Now fill the getsum function ,such that it returns sum of two numbers
    int x1=45,y1=45;
    int sum=getsum(x1,y1);
    printf("Sum of %d and %d is %d\n",x1,y1,sum);


    int number=456;
    //Task 2: Now write a reverseNum function ,which takes an integer as parameter ,and returns the Reverse of a number it got as
    //param
     int n0=12345;
     int n1=reverseNum(n0);
     printf("reverse of %d is %d\n",n0,n1);
    //1)Add reverseNum function prototype , Think what should you keep inside () and what will be its return value
    //2)Write the reverseNum function definition below all other functions ,make sure it is returning a Integer
    //3)Call the reverseNum function from main,Pass number to it
    //4)Print the returned value .

    //Task 3 :Write a isPrime function which takes a Int as inputparam ,and Returns 1 if number is prime or 0 if its not Prime
    //Follow the same things you did for reverseNum function
    return 0;

}
/*
Answers :
1) function 2 will take a b values from keyboard and prints a and b values as well as its sum
2) fun3() will be called 2 times and digits 0 to 9 will printed 2 times
3)prints 123;
4)prints 512
5)y value we have given is 100 but after calling fun5()..it's changed to 999
6)sum of 5 and 65 is 70
7)777 will be printed as fun6() will return value 777;
*/

//Function Definitions
void fun1(){
    printf("Inside Function 1\n");
}

void fun2(){
    int a,b;
    scanf("%d%d",&a,&b);
    printf("Sum of %d and %d is %d\n",a,b,a+b);
}

void fun3(){

    int i=0;
    for(i=0;i<10;i++){
        printf("%d ",i);
    }
    printf("\n");
}

void fun4(int number){
    printf("Got %d inside fun4\n",number);
}

void fun5(int y){
    printf("Got %d inside fun5\n",y);
    y=999;
    printf("Changed value of Y inside fun5 to %d\n",y);
}

void printsum(int a,int b){
    printf("\nSum of %d and %d is %d\n",a,b,a+b);

}

int fun6(){
    return 777;
}

int getsum(int a,int b){
    
    return a+b;
}

//Write reverseNum function here
 int reverseNum(int number){
    int rem,reverse=0;
    while(number>0){
        rem=number%10;
        reverse=reverse*10+rem;
        number=number/10;
    }
    return reverse;

}

//Write isPrime function here
void isPrime(int num){
    int count=0;
   for(int i=1;i<=num;i++){
      if(num%i==0){
        count++;
       }
   }
   if(count==2){
    printf("true\n");
   }
  else printf("false\n");
  }

