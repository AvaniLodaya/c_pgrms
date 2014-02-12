/*
 * Logic: Print numbers in given interval that can be express as sum of two prime numbers and
 * express as sum of two prime numbers in output.
 * 
 * Sample output:
 * Example 1:
 > /path/ ./a.out 
  2 14
  4 = 2 + 2
  5 = 2 + 3
  6 = 3 + 3
  7 = 2 + 5
  8 = 3 + 5
  9 = 2 + 7
  10 = 3 + 7
  10 = 5 + 5
  12 = 5 + 7
  13 = 2 + 11
  > /path/
  
  Example 2:
  > /path/ ./a.out 
  3
  2
  Error
  > /path/
  
 */
#include <stdio.h>

int prime(int n);
void func(int min, int max);

void main()
{
  int min, max, i, flag=0;
  scanf("%d%d",&min,&max);
  if((min>max)||(min<0))
    printf("Error\n");
  else
    func(min,max);
}

void func(int min, int max){
  int i,k;
  for(k=min+1;k<max;k++){
    for(i=2; i<=k/2; i++)
    {
      if (prime(i)!=0)
      {
	if ( prime(k-i)!=0)
	{
	  printf("%d = %d + %d\n", k, i, k-i);
	
	}
	
      }
    }
  }
}
int prime(int n)
{
  int i, flag=1;
  for(i=2; i<=n/2; ++i)
    if(n%i==0)
      flag=0;
    return flag;
}