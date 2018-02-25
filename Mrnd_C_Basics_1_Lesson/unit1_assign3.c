/*
Author : Abhijith Ravuri

Function going to be implemented getNthPrime
*/
/*
Constraints : -N will be positive ,return -1 if negative .
*/
 /*
        Returns the Nth Prime number .
        Ex : Input 1 , Output :2
        Ex : Input 3 , Output :5 (It is the 3rd prime number )
        Ex : Input 4 , Output :7
        Ex : Input 10 , Output :29

    */
    /*
    Algorithm :
    1)count=0
    2)I=2
    3)Check if Each I value from 2 is prime or not (Use Loop )
    4)If I is Prime increment count
    5)If the count has reached N ,it means the current number is Nth prime number ,return it .you can return it there itself
    or break from loop and return it .
    Its like if N is 3 ,
    It checks if I=2 is prime or not , Its prime so ,Count will be 1 ,Increments I
    It again checks I=3 is prime or not ,Its prime ,so Count will be incremented ie 2 ,Increment I
    It checks I=4 is prime or not ,Its not ,So count will not be incremented ,Increment I
    It checks I=5 is prime or not ,Its prime ,So count will be incremented ie 3,Now count is 3 and N is also 3 ,So return I ie 5
    */

#include<stdio.h>
 int isPrime(int num){
    int count=0;
   for(int i=1;i<=num;i++){
      if(num%i==0){
        count++;
       }
   }
   if(count==2){
    return 1;
   }
   return 0;
  }

int getNthPrime(int n){
   int count=0,num=1;
   int temp;
     while(count !=n){
        num++;
      if(isPrime(num)){
        count++;
      }

    }

       return num;
}

int main(){


    int n1=getNthPrime(1);
    printf("1st Prime is %d\n",n1);

    int n2=getNthPrime(3);
    printf("3rd Prime is %d\n",n2);

    int n3=getNthPrime(10);
    printf("10th Prime is %d\n",n3);
  

    int n4=getNthPrime(4);
    printf("4th Prime is %d\n",n4);

}
