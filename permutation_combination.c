/*
 * Logic: 
 * A permutation of a set of objects is an arrangement of those objects into a particular order.
 * A combination is a way of selecting several things out of a larger group, where (unlike permutations) order does not matter.
 * 
 * Sample output:
 * 
 * Example 1:
 > /path/ ./a.out
   10
   4
   10C4 = 210
   10P4 = 5040
 > /path/
 
 Example 2
 > /path/ ./a.out
   -1
   2
   Error
 > /path/
 
 Example 3
 > /path/ ./a.out
   1
   2
   Error
 > /path/
 
 */

#include<stdio.h>

long factorial(int);
long find_ncr(int, int);
long find_npr(int, int);

main()
{
  int n, r;
  long ncr, npr;
  scanf("%d%d",&n,&r);
  if((n<0)||(r<0)||(r>n))
    printf("Error\n");
  else{
    ncr = find_ncr(n, r);
    npr = find_npr(n, r);
    printf("%dC%d = %ld\n", n, r, ncr);
    printf("%dP%d = %ld\n", n, r, npr);
  }
  return 0;
}

long find_ncr(int n, int r)
{
  long result;
  
  result = factorial(n)/(factorial(r)*factorial(n-r));
  
  return result;
}

long find_npr(int n, int r)
{
  long result;
  
  result = factorial(n)/factorial(n-r);
  
  return result;
} 

long factorial(int n)
{
  int c;
  long result = 1;
  
  for( c = 1 ; c <= n ; c++ )
    result = result*c;
  
  return ( result );
}