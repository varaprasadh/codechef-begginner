#include<stdio.h>
#include<stdlib.h>
#define rows 4
#define cols 5

int rinit=0,cinit=0;
   int rfinal=rows-1,cfinal=cols-1;
   int count=0;
   int dir=00;
   int i=0;

int main(){
  // int mat[rows][cols];
  int mat[4][5]={
          {1, 2, 3,  4,21},
          {5, 6, 7,  8,22},
          {9, 10,11,12,23},
          {13,14,15,16,24}
      };
   
   while(count != rows*cols){
     switch(dir){
         case 00: //right direction
             for(i=cinit;i<=cfinal;i++){
             	printf("%d\t",mat[rinit][i]);
             	count++;
             	 } 
             	 dir=01; rinit++;
                   break;
          case 01://down direct
               for(i=rinit;i<=rfinal;i++){
               	printf("%d\t",mat[i][cfinal]);
               	count++;
               }   cfinal--;
                dir=10;
              break;
          case 10://left direct
              for(i=cfinal;i>=cinit;i--){
              	printf("%d\t",mat[rfinal][i]);
              	count++;
              }        rfinal--;
              dir=11;
             break;
           case 11://up side
                for(i=rfinal;i>=rinit;i--){
                	printf("%d\t",mat[i][cinit]);
                	count++;
                }
                dir=00; cinit++;
           break;


     }



   }
  

	return 0;

}