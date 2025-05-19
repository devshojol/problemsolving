#include <stdio.h>
#include <string.h>
#include <ctype.h>

int i = 0, vowels = 0;
char str[200];

void countVowels(int i)
{

  if (str[i] == '\0')
  {
    return;
  }

  if (tolower(str[i]) == 'a' ||
      tolower(str[i]) == 'e' ||
      tolower(str[i]) == 'i' ||
      tolower(str[i]) == 'o' ||
      tolower(str[i]) == 'u')
  {
    vowels++;
  }

  countVowels(i = i + 1);
}

int main()
{
  fgets(str, 200, stdin);
  countVowels(i);
  printf("%d", vowels);
  return 0;
}