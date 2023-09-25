#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */

char *cap_string(char *s);
int main(void)
{
    char str[] = "Expect the best. Prepare for the worst. Capitalize on what comes.\nhello world! hello-world 0123456hello world\thello world.hello world\n";
    char *ptr;

    ptr = cap_string(str);
    printf("%s", ptr);
    printf("%s", str);
    return (0);
}

char *cap_string(char *s)
{
    int i = 0, j;

    char a[] = {' ','\t','\n',',',';','.','!','?','"','(',')','{','}'};

  while (s[i] != '\0')
  {
    if (s[i] >= 97 && s[i] <= 122)
    {
        if (i == 0)
        {
            s[i] = s[i] - 32;
        }
        else
        {
            for (j = 0; j <= 12; j++)
            {
                if (a[j] == s[i - 1])
                
                    s[i] = s[i] - 32;
                
            }
        }
    }
    i++;
  }
  return (s);
}