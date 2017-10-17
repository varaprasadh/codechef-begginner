/*

 Chef wants to prepare a Cook-Off contest with 5 problems chosen from a set of N problems. He has marked the difficulty of each problem within a range identified by one of the following strings: "cakewalk", "simple", "easy", "easy-medium", "medium", "medium-hard", "hard". According to this page, a Cook-Off contest must have problems of the following difficulties:

    exactly one "cakewalk";
    exactly one "simple";
    exactly one "easy";
    one "easy-medium" or one "medium";
    one "medium-hard" or one "hard".

Given the information about the N problems, can you advise Chef if it's possible to pick 5 problems and form a valid Cook-Off contest?
Input

    The first line of input contains one integer T denoting the number of test cases.
    T test cases follow.
    The first line of each test case contains a single integer N.
    Then N lines follow; the i-th line contains a single string si, denoting the difficulty of the i-th problem.

Output

For each test case, output "Yes" if it's possible to pick 5 problems and form a valid Cook-Off contest; otherwise, output "No".
Constraints

    1 ≤ T ≤ 100000
    5 ≤ N ≤ 100000
    sum of N in all test cases ≤ 600000
    si can only be one of the following strings:
        "cakewalk"
        "simple"
        "easy"
        "easy-medium"
        "medium"
        "medium-hard"
        "hard"

Subtask #1 (11 points):

    N = 5

Subtask #2 (27 points):

    5 ≤ N ≤ 15
    T ≤ 100

Subtask #3 (62 points):

    original constraints


*/



#include<stdio.h>
#include<stdlib.h>

void main(){
char a[10];
int T,N;
int simp=0,easy=0,cwalk=0,hard=0,medium=0,medh=0,easym=0;
scanf("%d",&T);
  for(int i=0;i<T;i++){
  scanf("%d",&N);
    for(int j=0;j<N;j++){
    scanf("%s",a);
    if(a=='easy'){easy++;}
    else if(a=='medium'){medium++;}
          else if(a=='cakewalk'){cwalk++;}
              else if(a=='hard'){hard++;}
                else if(a=='easy-medium'){ easym++;}
                     else if(a=='simple'){ simp++;}
                     else medh++;
    } 
        if(easy==1 && simp==1 && cwalk==1 && easym >=0 || medium >=0 && medh>=0 || hard>=0){
       printf("yes");
       }
       else{
       printf("no");
      }
 
   }
}  
  

