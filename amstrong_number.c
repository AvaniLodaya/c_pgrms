/*
 * Logic:
 * Find Amstrongs number between 1 and input number, including 1 and the input number.
 * An Armstrong number is a number such that the
 * sum of its digits raised to the third power is equal to the number
 * itself.
 * For example, 371 is an Armstrong number, since
 * 3**3 + 7**3 + 1**3 = 371.
 * Sample output:

 > /path/ ./a.out
 450
 1
 153
 370
 371
 407
 > /path/

 */

#include <stdio.h>
void func(int num);
int main()
{
  long number = 0;
  scanf("%ld",&number);
  func(number);
  return 0;
}

void func(int num){
  int r;
  long i, sum = 0, temp;
  for( i = 1 ; i <= num ; i++ )
  {
    temp = i;
    while( temp != 0 )
    {
      r = temp%10;
      sum = sum + r*r*r;
      temp = temp/10;
    }
    if ( i == sum )
      printf("%ld\n", i);
    sum = 0;
  }
}
