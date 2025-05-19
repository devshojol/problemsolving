#include <stdio.h>
#include <string.h>

int main()
{

  int testCasesCount, answer = 0;

  scanf("%d", &testCasesCount);

  for (int i = 0; i < testCasesCount; i++)
  {
    char string[5];
    scanf("%s", string);
    if (strstr(string, "++"))
    {
      answer++;
    }
    else if (strstr(string, "--"))
    {
      answer--;
    }
  }
  printf("%d", answer);
  return 0;
}