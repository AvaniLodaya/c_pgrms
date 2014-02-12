/*
 * Logic: Print pyramid using *.
 * 
  Sample output:
  Example 1:
  
  > /path/ ./a.out
  5
          * 
        * * * 
      * * * * * 
    * * * * * * * 
  * * * * * * * * * 
  > /path/
  
 */
#include <stdio.h>
void func(int rows);

int main()
{
    int i,space,rows;
    scanf("%d",&rows);
    func(rows);
    return 0;
}

void func(int rows){
  int i,space,k=0;
  for(i=1;i<=rows;++i)
    {
        for(space=1;space<=rows-i;++space)
        {
           printf("  ");
        }
        while(k!=2*i-1)
        {
           printf("* ");
           ++k;
        }
        k=0;
        printf("\n");
    }
}