#include <stdio.h>

void printDigit(int n)
{
  if (n == 0)
    return;

  int number;
  int digit[10];

  scanf("%d", &number);

  int i = 0;
  if (number == 0)
  {
    printf("0 ");
  }
  while (number != 0)
  {
    digit[i] = number % 10;
    i++;
    number = number / 10;
  }

  for (int j = i - 1; j >= 0; j--)
  {
    printf("%d ", digit[j]);
  }
  printf("\n");
  printDigit(n = n - 1);
}

int main()
{
  int n;
  scanf("%d", &n);
  printDigit(n);
  return 0;
}