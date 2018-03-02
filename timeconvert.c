#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

char* timeConversion(char* s) {
    char a[2];
    int hh,mm,ss;
    char* out=(char*)malloc(sizeof(char)*20);
    sscanf(s,"%d:%d:%d:%s",&hh,&mm,&ss,a);
    if(hh!=12 && strcmp(a,"PM")==0)
    { 
         hh+=12;
    
    }
     else{
        hh=0;
     }
    sprintf(out,"%d:%d:%d:%s",hh,mm,ss,a);
    return out;
}

int main() {
    char* s = (char *)malloc(512000 * sizeof(char));
    scanf("%s", s);
        int result_size;
char* result = timeConversion(s);
    printf("%s\n", result);
    return 0;
}
