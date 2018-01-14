/*
* written by varaprasadh
Sort the Substring
Given a string
S
S, and two numbers
N
N,
M
M - arrange the characters of string in between the indexes
N
N and
M
M (both inclusive) in descending order. (Indexing starts from 0).

Input Format:
First line contains
T
T - number of test cases.
Next T lines contains a string(
S
S) and two numbers(
N
N,
M
M) separated by spaces.

Output Format:
Print the modified string for each test case in new line.

*/
#include<stdio.h>
#include<stdlib.h>

void main(){
int start,end;
char string[10],aux[10];
int i,j,mid;
char temp;
printf("enter a string : ");
scanf("%s",string);
printf("\nenter indexes:");
scanf("%d%d",&start,&end);
for(i=start; i<=end;i++){
  mid=i;
   for(j=start;j<=end;j++){
     if(string[mid]<string[j]){
       temp=string[mid];
       string[mid]=string[j];
       string[j]=temp;
       mid=j;

     }
   }
  }
  printf("%s",string);
}
