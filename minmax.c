//on the process
#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

void miniMaxSum(int arr_size, int* arr) {
  int min=0,max=0,n=1; 
  int count=0,sum=0,j;
   for(int i=0;i<arr_size;i++){
       j=i;
     while(count<arr_size-1){
        j=(j+1)%arr_size;
        sum+=arr[j];
        count++;
     }
     count=0;
     if(sum>max){
        max=sum;
     }
     else if(sum<min || min==0){
        min=sum;
     }
     sum=0;
   }
    printf("%d %d",min,max);
}

int main() {
    int *arr = malloc(sizeof(int) * 5);
    for (int arr_i = 0; arr_i < 5; arr_i++) {
       scanf("%i",&arr[arr_i]);
    }
    miniMaxSum(5, arr);
    return 0;
}
