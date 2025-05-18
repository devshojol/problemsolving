#include <stdio.h>
#include <ctype.h>

void string_to_lower(char *str) {
  for (int i = 0; str[i]; i++) {
    str[i] = tolower(str[i]);
  }
}

int main()
{
    char a[100], b[100];
    scanf("%s %s", a, b);

    string_to_lower(a);
    string_to_lower(b);
    int i = 0;
    while (1)

    {
        if (a[i] == '\0' && b[i] == '\0')
        {
            printf("0");
            break;
        }
        else if (a[i] == '\0')
        {
            printf("-1");
            break;
        }
        else if (b[i] == '\0')
        {
            printf("1");
            break;
        }
        if (a[i] == b[i])
        {
            i++;
        }
        else if (a[i] < b[i])
        {
            printf("-1");
            break;
        }
        else
        {
            printf("1");
            break;
        }
    }
    return 0;
}