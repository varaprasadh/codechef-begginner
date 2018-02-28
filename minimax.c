//on the process
#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

void miniMaxSum(int arr_size, int* arr) {
   long long int min=0,max=0,sum=0; 
for(int i=0;i<arr_size;i++){
    sum+=arr[i];
  }
  for(int j=0;j<arr_size;j++){
    if((sum-arr[j])>max){
        max=sum-arr[j];
    }
    if( (sum-arr[j])<min || min==0){
        min=sum-arr[j];
    }
  }

    printf("%lld %lld",min,max);
}

int main() {
    int *arr = malloc(sizeof(int) * 5);
    for (int arr_i = 0; arr_i < 5; arr_i++) {
       scanf("%i",&arr[arr_i]);
    }
    miniMaxSum(5, arr);
    return 0;
}
