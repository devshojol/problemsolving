#include <stdio.h>

int main()
{
  int a, b, c;
  scanf("%d %d", &a, &b);
  c = 0;
  while (a <= b)
  {
    a = a * 3;
    b = b * 2;
    c++;
  }
  printf("%d", c);

  return 0;
}