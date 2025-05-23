#include <stdio.h>

int main()
{
  char name[101];
  scanf("%s", name);

  int i, j, count = 0;
  int seen[256] = {0};

  for (int i = 0; name[i] != '\0'; i++)
  {
    unsigned char ch = name[i];
    if (seen[ch] == 0)
    {
      seen[ch] = 1;
      count++;
    }
  }

  if (count % 2 == 0)
  {
    printf("CHAT WITH HER!");
  }
  else
  {
    printf("IGNORE HIM!");
  }

  return 0;
}