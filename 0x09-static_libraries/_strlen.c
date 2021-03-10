/*
 * File: 2-strlen.c
 * Auth: Yosef Samuel
 */

#include "holberton.h"

/**
 * _strlen - Returns the length of a string.
 * @str: The string to get the length of.
 *
 * Return: The length of @str.
 */
int _strlen(char *str)
{
int length = 0;

while (*str++)
length++;

return (length);
}
