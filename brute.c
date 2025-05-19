#include <stdio.h>
#include <string.h>
#include <time.h> // Include time library for measuring execution time

#define CHARSET "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ1234567890!@#$%^&*()_-+=~`[]{}|:;<>,.?/" // Expanded charset
#define PASSWORD_LENGTH 5                                                                                     // Updated password length for "!aQ@3~w#$"

// The password to find
const char *actualPassword = "abcde";

// Function to check if the password is correct
int checkPassword(const char *password)
{
  return strcmp(password, actualPassword) == 0;
}

// Brute force function for 9-character passwords
void findPassword(const char *charset, int length)
{
  int charsetLength = strlen(charset);
  int indices[length];
  char attempt[length + 1]; // Buffer for the password attempt

  printf("Starting brute force...\n");

  // Record the start time
  clock_t startTime = clock();

  // Initialize indices for the password length
  for (int i = 0; i < length; i++)
  {
    indices[i] = 0;
  }

  while (1)
  {
    // Generate the current password attempt
    for (int i = 0; i < length; i++)
    {
      attempt[i] = charset[indices[i]];
    }
    attempt[length] = '\0'; // Null-terminate the string

    // Check if the password matches
    if (checkPassword(attempt))
    {
      // Record the end time
      clock_t endTime = clock();

      // Calculate the elapsed time in seconds
      double elapsedTime = (double)(endTime - startTime) / CLOCKS_PER_SEC;

      printf("Password found: %s\n", attempt);
      printf("Time taken: %.2f seconds\n", elapsedTime);
      return;
    }

    // Increment the indices (simulate base-N counting)
    int position = length - 1;
    while (position >= 0)
    {
      if (indices[position] < charsetLength - 1)
      {
        indices[position]++;
        break;
      }
      else
      {
        indices[position] = 0;
        position--;
      }
    }

    // Break if all combinations are exhausted
    if (position < 0)
    {
      break;
    }
  }

  // Record the end time
  clock_t endTime = clock();

  // Calculate the elapsed time in seconds
  double elapsedTime = (double)(endTime - startTime) / CLOCKS_PER_SEC;

  printf("Password not found.\n");
  printf("Time taken: %.2f seconds\n", elapsedTime);
}

int main()
{
  findPassword(CHARSET, PASSWORD_LENGTH);
  return 0;
}
