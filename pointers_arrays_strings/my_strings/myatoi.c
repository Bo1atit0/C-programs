#include <stdio.h>


int _atoi(char *s)
{

int sign = 0, res = 0, len = 0, i;

if (s == 0)
{
    return (0);
}
while (s[len] != '\0')
{
    len++;
}

for (i = 0; i < len; i++)
{
    if (s[i] == '-')
    {
        sign++;
    }
     if (s[i] >= '0' && s[i] <= '9')
    {
        res = res * 10 + s[i] - '0';
    
   if (s[i + 1] < '0' || s[i + 1] > '9')
    {
        break;
    }
    }
}
if (sign % 2 != 0)
{
res = res * -1;
}
return (res);
}

int main(void)
{
    int nb;

    nb = _atoi("98");
    printf("%d\n", nb);
    nb = _atoi("-402");
    printf("%d\n", nb);
    nb = _atoi("          ------++++++-----+++++--98");
    printf("%d\n", nb);
    nb = _atoi("214748364");
    printf("%d\n", nb);
    nb = _atoi("0");
    printf("%d\n", nb);
    nb = _atoi("Suite 402");
    printf("%d\n", nb);
    nb = _atoi("         +      +    -    -98 Battery Street; San Francisco, CA 94111 - USA             ");
    printf("%d\n", nb);
    nb = _atoi("---++++ -++ Sui - te -   402 #cisfun :)");
    printf("%d\n", nb);
    return (0);
}