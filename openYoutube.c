#include <stdio.h>
#include <stdlib.h>

int main()
{
  // URL to open in Chrome
  const char *url = "https://www.youtube.com/watch?v=ft4jcPSLJfY&list=RDft4jcPSLJfY&start_radio=1&ab_channel=DavidGuetta";

  // Command to open the URL in Google Chrome
  char command[512];
  snprintf(command, sizeof(command), "open -a 'Google Chrome' '%s'", url);

  // Execute the command
  int result = system(command);

  // Check if the command was executed successfully
  if (result == 0)
  {
    printf("URL opened successfully in Google Chrome.\n");
  }
  else
  {
    printf("Failed to open URL in Google Chrome.\n");
  }

  return 0;
}
