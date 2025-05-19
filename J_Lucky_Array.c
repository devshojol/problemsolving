#include <stdio.h>

int main()
{
  int length, min = 0;
  scanf("%d", &length);

  int array[length];

  for (int i = 0; i < length; i++)
  {
    scanf("%d", &array[i]);
  }

  min = array[0];

  for (int i = 0; i < length; i++)
  {
    if (array[i] < min)
    {
      min = array[i];
    }
  }

  int count = 0;
  for (int i = 0; i < length; i++)
  {
    if (array[i] == min)
    {
      count++;
    }
  }

  if (count % 2 == 0)
  {
    printf("Unlucky\n");
  }
  else
  {
    printf("Lucky\n");
  }

  return 0;
}