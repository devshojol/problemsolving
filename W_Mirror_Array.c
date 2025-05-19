#include <stdio.h>

int main()
{
  int rows, cols;
  scanf("%d %d", &rows, &cols);
  int arr[rows][cols];
  for (int i = 0; i < rows; i++)
  {
    for (int j = 0; j < cols; j++)
    {
      scanf("%d", &arr[i][j]);
    }
  }
  //  Printing the array

  for (int i = 0; i < rows; i++)
  {
    for (int j = cols - 1; j >= 0; j--)
    {
      printf("%d ", arr[i][j]);
    }
    printf("\n");
  }
  return 0;
}