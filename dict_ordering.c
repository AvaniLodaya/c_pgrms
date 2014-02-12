/*
 * Logic: Lexicographical order is dictionary ordering.
 * Note: the input must be 5 string.
 * Sample output:
 * 
 * > /path/ ./a.out
 * who 
 * where
 * when
 * how
 * hello
 * 
 * hello
 * how
 * when
 * where
 * who
 * > /path/
 * 
 */ 
#include<stdio.h>
#include <string.h>
void func(char str[50][50]);
int main(){
  int i;
  char str[50][50];
  for(i=0;i<5;++i){
    gets(str[i]);
  }
  func(str);
  return 0;
}

void func(char str[50][50]){
char temp[50];
  int i,j;
  for(i=0;i<4;++i)
    for(j=i+1;j<5 ;++j){
      if(strcmp(str[i],str[j])>0)
      {
	strcpy(temp,str[i]);
	strcpy(str[i],str[j]);
	strcpy(str[j],temp);
      }
    }
    printf("\n");
  for(i=0;i<5;++i){
    puts(str[i]);
  }
}