#include <stdio.h>

int main()
{
  char a[101];
  scanf("%s", a);
  char arr[101];

  int index = 0;
  for (int i = 0; a[i] != '\0'; i++)
  {
    if (a[i] != '+')
    {
      arr[index] = a[i];
      index = index + 1;
    }
  }

  for (int i = 0; arr[i] != '\0'; i++)
  {
    for (int j = i + 1; arr[j] != '\0'; j++)
    {
      if (arr[i] > arr[j])
      {
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
      }
    }
  }

  for (int i = 0; arr[i] != '\0'; i++)
  {
    printf("%c", arr[i]);
    if (arr[i + 1] != '\0')
    {
      printf("+");
    }
  }
  return 0;
}