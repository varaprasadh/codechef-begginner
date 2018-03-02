#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

void countApplesAndOranges(int s, int t, int a, int b, int apples_size, int* apples, int oranges_size, int* oranges) {
    int applecount=0,orangecount=0;
    for(int i=0;i<apples_size;i++){
        if(a+apples[i]>=s && apples[i]>=0 && a+apples[i]<=t ){
            applecount++;
        }
    }
    for(int j=0;j<oranges_size;j++){
        if( oranges[j]<=0 && b+oranges[j]<=t && b+oranges[j]>=s ){
            orangecount++;
        }
    }
    printf("%i\n%i",applecount,orangecount);
}

int main() {
    int s; 
    int t; 
    scanf("%i %i", &s, &t);
    int a; 
    int b; 
    scanf("%i %i", &a, &b);
    int m; 
    int n; 
    scanf("%i %i", &m, &n);
    int *apple = malloc(sizeof(int) * m);
    for (int apple_i = 0; apple_i < m; apple_i++) {
       scanf("%i",&apple[apple_i]);
    }
    int *orange = malloc(sizeof(int) * n);
    for (int orange_i = 0; orange_i < n; orange_i++) {
       scanf("%i",&orange[orange_i]);
    }
    countApplesAndOranges(s, t, a, b,m, apple,n, orange);
    return 0;
}
