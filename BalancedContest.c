/*
Chef wants to organize a contest. Predicting difficulty levels of the problems can be a daunting task. Chef wants his contests to be balanced in terms of difficulty levels of the problems.

Assume a contest had total P participants. A problem that was solved by at least half of the participants (i.e. P / 2 (integer division)) is said to be cakewalk difficulty. A problem solved by at max P / 10 (integer division) participants is categorized to be a hard difficulty.

Chef wants the contest to be balanced. According to him, a balanced contest must have exactly 1 cakewalk and exactly 2 hard problems. You are given the description of N problems and the number of participants solving those problems. Can you tell whether the contest was balanced or not?
Input

The first line of the input contains an integer T denoting the number of test cases.

The first line of each test case contains two space separated integers, N, P denoting the number of problems, number of participants respectively.

The second line contains N space separated integers, i-th of which denotes number of participants solving the i-th problem.
Output

For each test case, output "yes" or "no" (without quotes) denoting whether the contest is balanced or not.


*/
#include <stdio.h>
#include<stdlib.h>

int main() {
  int T,N,P,hard=0,cwalk=0,capable;
  scanf("%d",&T);
  while(T!=0){
      scanf("%d%d",&N,&P);


      if(N<=500 && N>0){
       
      for(i=0;i<N;i++)   {           
          scanf("%d",&capable); 
                                             

              if(capable>=P/2){
                  cwalk++;
              }
              if(capable<=P/10){
                  hard++;
              }  
           }
            
          } 
        if(cwalk==1 && hard==2){
              printf("yes\n");
              }
            else{
                  printf("no\n");
              }
       
           hard=0;  cwalk=0;
          T--; 
      }


	return 0;
}

