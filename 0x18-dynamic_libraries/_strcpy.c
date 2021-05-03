#include "holberton.h"

/**
 * _strcpy - copies an entire string to a buffer
 *
 *
 * @src: source string to copy
 * @dest: buffer to copy string into
 * Return: returns pointer to copied string
 */

char *_strcpy(char *dest, char *src)
{
  int i;
  char *retval;

  i = 0;
  while (src[i] != '\0')
    {
      dest[i] = src[i];
      i++;
    }
  dest[i] = src[i];

  retval = dest;

  return (retval);
}
