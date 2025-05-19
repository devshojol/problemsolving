#include <stdio.h>

int fibonacci(int n);

int main()
{
  int n;
  printf("Enter a number: ");
  scanf("%d", &n);

  // find Fibonacci number using for loop
  printf("fibonacci is %d \n", fibonacci(n));
  return 0;
}

int fibonacci(int n)
{
  if (n == 0)
  {
    return 0;
  }
  else if (n == 1)
  {
    return 1;
  }
  else
  {
    return fibonacci(n - 1) + fibonacci(n - 2);
  }
}

// average of three numbers;

/*
{

  int a, b, c;
  printf("Inter first number :");
  scanf("%d", &a);
  printf("Inter second number :");
  scanf("%d", &b);
  printf("Inter third number : ");
  scanf("%d", &c);
  int average = (a + b + c) / 3;

  printf("Average of %d , %d , %d, is: %d \n", a, b, c, average);
}
*/

// data types

/* {
  int number = 77;
  int age = 18;
  float pi = 3.1416;
  char my_name[] = "Shojol Islam";
  char star = '*';

  printf("Hello, my name is %s \n", my_name);
  printf("I'm %d years old \n", age);
  printf("The %s is %c \n", "star", star);
  printf("The value of pi is approximately %f \n", pi);
  return 0;
}
*/