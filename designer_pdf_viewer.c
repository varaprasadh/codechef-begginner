#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int designerPdfViewer( int* h, char* word) {
    int length=strlen(word);
    int max_height=0;
    for(int i=0;i<length;i++){
        if(h[word[i]-97]>max_height){
            max_height=h[word[i]-97];
        }
    }
     return length*max_height;
}

int main() {
    int *h = malloc(sizeof(int) * 26);
    for (int h_i = 0; h_i < 26; h_i++) {
       scanf("%i",&h[h_i]);
    }
    char* word = (char *)malloc(512000 * sizeof(char));
    scanf("%s", word);
    int result = designerPdfViewer(h, word);
    printf("%d\n", result);
    return 0;
}
