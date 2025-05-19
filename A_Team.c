#include <stdio.h>

int main()
{
  int testCaseCount, solvedCount = 0;
  scanf("%d", &testCaseCount);

  for (int i = 0; i < testCaseCount; i++)
  {
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    if (a + b + c >= 2)
      solvedCount++;
  }
  printf("%d", solvedCount);
  return 0;
}