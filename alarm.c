#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <unistd.h> // For sleep()

void openYouTube()
{
  // Command to open YouTube with the specified URL
  system("open https://www.youtube.com/watch?v=iOxzG3jjFkY&list=RDft4jcPSLJfY&index=3&ab_channel=WillyWilliam");
  printf("YouTube opened with the song!\n");
}

int main()
{
  struct tm *currentTime;
  time_t now;

  printf("Program started. Waiting until 5:05 PM to open YouTube...\n");

  while (1)
  {
    // Get the current time
    time(&now);
    currentTime = localtime(&now);

    // Check if the current time matches the specified time
    if (currentTime->tm_hour == 17 && currentTime->tm_min == 3)
    {
      openYouTube();
      break; // Exit the program after executing
    }

    // Sleep for 30 seconds to avoid excessive CPU usage
    sleep(30);
  }

  return 0;
}
