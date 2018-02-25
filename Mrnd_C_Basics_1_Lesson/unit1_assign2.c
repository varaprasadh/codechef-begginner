#include<stdio.h>
int getDigitSum(int number){
    int sum=0;
    int ldigit;
    while(number>0){
      ldigit=number%10;
      sum+=ldigit;
      number=number/10;
    }     
    return sum;
}

int getFinalDigitSum(int number){
    int sum=getDigitSum(number);
     if(sum>9){
        sum=getDigitSum(sum);
       }
   
    return sum;
}
int main(){

    //Test the above two functions from here ,Write More Test cases so that your Code works for all .

    int sum1=getDigitSum(123);
    printf("Digits sum of 123 is %d\n",sum1);


    int sum2=getDigitSum(765);
    printf("Digits sum of 765 is %d\n",sum2);


    int sum3=getFinalDigitSum(993);
    printf("Final Digits sum of 993 is %d\n",sum3);

    int sum4=getDigitSum(1234);
    printf("Digits sum of 1234 is %d\n",sum4 );

    int sum5=getFinalDigitSum(1234);
    printf("final Digits sum of 1234 is %d\n",sum5 );

}
