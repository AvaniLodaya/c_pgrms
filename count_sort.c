/*
 * Logic:
 * Sort operates by counting the number of objects that have each distinct key value.
 * Using arithmetic on those counts to determine the positions of each key value in the output sequence.
 *
 * Sample output:
  Example 1:
  > /path/ ./a.out
  Vidyut

  Vdituy
  > /path/

  Example 2:
  > /path/
  vidyut

  dituvy
  > /path/
*/
#include <stdio.h>
#include <string.h>
#define RANGE 255

void sort(char *str);

int main()
{
	char str[50];
	scanf("%s",str);
	sort(str);
	printf("\n%s\n",str);
	return 0;
}
void sort(char *str)
{	char output[strlen(str)];
	int count[RANGE + 1], i;
	memset(count, 0, sizeof(count));
	for(i = 0; str[i]; ++i)
		++count[str[i]];
	for (i = 1; i <= RANGE; ++i)
		count[i] += count[i-1];
	for (i = 0; str[i]; ++i)
	{
		output[count[str[i]]-1] = str[i];
		--count[str[i]];
	}
	for (i = 0; str[i]; ++i)
		str[i] = output[i];
}
