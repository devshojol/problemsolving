#include <stdio.h>

long long int factor = 1;
void factorial(int n)
{
  if (n == 0)
  {
    return;
  }

  factor = factor * n;
  factorial(n - 1);
}

int main()
{
  int n;
  scanf("%d", &n);
  factorial(n);

  printf("%lld", factor);
  return 0;
}
