#include <stdio.h>

int main()
{
  int n, i, j, count = 0;
  scanf("%d", &n);
  char s[n];
  scanf("%s", s);
  for (i = 0; i < n; i++)
  {
    if (s[i] == s[i + 1])
    {
      count++;
    }
  }
  printf("%d", count);
  return 0;
}