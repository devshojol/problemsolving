#include <stdio.h>

int main()
{
  int cost, money, bananas, need = 0;
  scanf("%d %d %d", &cost, &money, &bananas);

  for (int i = 1; i <= bananas; i++)
  {
    need += i * cost;
  }
  if (need > money)
  {
    printf("%d", need - money);
  }
  else
  {
    printf("0");
  }
  return 0;
}