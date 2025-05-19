#include <stdio.h>

int main()

{
  int a[5][5];
  int i, j, move = 0;

  for (i = 0; i < 5; i++)
  {
    for (j = 0; j < 5; j++)
    {
      scanf("%d", &a[i][j]);
    }
  }

  for (i = 0; i < 5; i++)
  {
    for (j = 0; j < 5; j++)
    {
      if (a[i][j] == 1)
      {
        i++;
        j++;
        if (i != 3)
        {
          if (i > 3)
          {
            move = move + (i - 3);
          }
          else
          {
            move = move + (3 - i);
          }
        }
        if (j != 3)
        {
          if (j > 3)
          {
            move = move + (j - 3);
          }
          else
          {
            move = move + (3 - j);
          }
        }
      }
    }
  }

  printf("%d", move);
  return 0;
}
