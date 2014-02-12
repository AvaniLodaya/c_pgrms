/*
 * Logic :given a set of integers and an integer s, does any non-empty subset sum to s? 
 * Note:set should contain 10 elements
 *
 * sample output :
 *  Example 1:
  > /path/ ./a.out
10
1
1
1
1
1
1
1
1
1
1
Found a subset with given sum
> /path/
*/
#include <stdio.h>

int isSubsetSum(int set[10], int n, int sum);

int main()
{
  int set[10];
  int sum,i;
  scanf("%d",&sum);
  for(i=0;i<10;i++){
    scanf("%d",&set[i]);
  }
  int n = sizeof(set)/sizeof(set[0]);
  if (isSubsetSum(set, n, sum) == 1)
     printf("Found a subset with given sum\n");
  else
     printf("No subset with given sum\n");
  return 0;
}

int isSubsetSum(int set[], int n, int sum)
{
   if (sum == 0)
     return 1;
   if (n == 0 && sum != 0)
     return 0;

   if (set[n-1] > sum)
     return isSubsetSum(set, n-1, sum);

   return isSubsetSum(set, n-1, sum) || isSubsetSum(set, n-1, sum-set[n-1]);
}

