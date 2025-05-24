#include <stdio.h>
#include <math.h>

int main()
{
  int coordinate, steps = 1;
  scanf("%d", &coordinate);

  if (coordinate <= 5)
  {
    printf("%d", steps);
  }
  else
  {
    int i = ceil(coordinate / 5.00);
    printf("%d", i);
  }
}