/*
 * Logic: Checking for the occurrence of a patter in given text by sliding the pattern over the text.If found, the position at which the patern occurs is the output.
 * Sample output
 * Example 1:
  > /path/ ./a.out
  Text
  12345 67
  String to find
  67
  Found at location 7
  > /path/

  Example 2
  > /path/ ./a.out
  Text
  Welcome To Vidyut
  String to find
  vidyut
  Not found.
  > /path/

 */

#include <stdio.h>
#include <string.h>

int match(char [], char []);

int main() {
  char a[100], b[100];
  int position;

  printf("Text\n");
  gets(a);

  printf("String to find\n");
  gets(b);

  position = match(a, b);

  if(position != -1) {
    printf("Found at location %d\n", position + 1);
  }
  else {
    printf("Not found.\n");
  }
  return 0;
}

int match(char text[], char pattern[]) {
  int c, d, e, text_length, pattern_length, position = -1;

  text_length    = strlen(text);
  pattern_length = strlen(pattern);

  if (pattern_length > text_length) {
    return -1;
  }

  for (c = 0; c <= text_length - pattern_length; c++) {
    position = e = c;

    for (d = 0; d < pattern_length; d++) {
      if (pattern[d] == text[e]) {
        e++;
      }
      else {
        break;
      }
    }
    if (d == pattern_length) {
      return position;
    }
  }
  return -1;
}
