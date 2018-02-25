
#include<stdio.h>
#include<stdlib.h>


void typeofTraingle(int x1,int y1,int x2,int y2,int x3,int y3){
     int a,b,c;
     a=sqrt(pow((x2-x1),2)+pow((y2-y1),2));
     b=sqrt(pow((x3-x2),2)+pow((y3-y2),2));
     b=sqrt(pow((x1-x3),2)+pow((y1-y3),2));
   if(a==b && b==c){
   	printf("its equilateral triangle!");
   }
   else if(a==b || b==c || c==a){
   	printf("its a isoscelene triangle");
   }
   else{
   	printf("scelene triangle");
   }

}

int main(){

    typeofTraingle(0,0,2,0,0,2); //Should print "Iscosceles"

    typeofTraingle(0,0,0,2,2,7); //Should print "Scalene"

    return 0;
}
