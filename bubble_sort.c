/*
 * Logic:Bubble sort
 * Sample output:
 * 
 * > /path/ ./a.out
 * 7
 * 55
 * 999
 * 33
 * 5
 * 1
 * 23
 * 2
 * 1 2 5 23 33 55 999
 * > /path/
 * 
 */
#include<stdio.h>
int myarray[50];

void swap(int i,int j);
void sort(int num);

void main(){
  int num,i;
  scanf("%d",&num);
  for(i=0;i<num;i++)
    scanf("%d",&myarray[i]);
  sort(num);
  for(i=0;i<num;i++)
    printf("%d ",myarray[i]);
  printf("\n");
}

void sort(int num){
  int i,j,exchs,k;
  int last = num;
  for(k=0;k<num;k++)
  {
    exchs = 0;
    for(j=0;j<last-1;j++)
    {
      if(myarray[j]>myarray[j+1]){
	swap(j,j+1);
	exchs++;
      }		
    }
    if (exchs == 0)
      return;
    else
      last = last-1;
  }    
}
void swap(int i,int j){
  int temp;
  temp = myarray[i];
  myarray[i] = myarray[j];
  myarray[j] = temp;
}
