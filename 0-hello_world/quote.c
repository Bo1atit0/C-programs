#include <unistd.h>
#include <string.h>

/**
 * main - program that prints a string to stderr
 * Return: 1
 */
int main(void)
{
  size_t res;
  char str[] =   "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
  
res =	write(2, str, 59);
  if (res != 59)
  {
return (1);
}
  return (1);
}