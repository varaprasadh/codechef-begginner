#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int utopianTree(int n) {
    int height=1;
   for(int i=0;i<n;i++){
    if(i%2==1){
        height++;
    }
    else height *=2;
   }
    return height;
}

int main() {
    int t; 
    scanf("%i", &t);
    for(int a0 = 0; a0 < t; a0++){
        int n; 
        scanf("%i", &n);
        int result = utopianTree(n);
        printf("%d\n", result);
    }
    return 0;
}
