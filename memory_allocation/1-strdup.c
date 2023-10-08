#include "main.h"

char *_strdup(char *str)
{
     char *ptr;
     int len, i;

    if (str == NULL)
    {
        return (0);
    }

    len = 0;

    while(str[len] != '\0')
    {
        len++;
    }

    ptr = (char*)malloc((len + 1) * sizeof(char));
    if (ptr == NULL)
    {
        return (0);
    }

    for (i = 0; i < len; i++)
    {
        ptr[i] = str[i];
    }
    ptr[i] = '\0';
    return (ptr);

}