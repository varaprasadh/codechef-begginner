#include<stdio.h>
#include<stdlib.h>
#include<string.h>

char* breakTheString(char* str,int n){
  char* broken=(char*)malloc(sizeof(char)*40);
  str[strlen(str)-n]='\0';
  broken=str;
  return broken;


}
int main()
{
    char* str=(char*)malloc(sizeof(char)*30);

    int n;
    printf("enter string and 'n': ");
    scanf("%s%d",str,&n);
    char* finalString=(char*)malloc(sizeof(char)*30);
    finalString=breakTheString(str,n);
    printf("\n%s",finalString);

	return 0;
}