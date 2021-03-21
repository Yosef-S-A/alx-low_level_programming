#include <stdio.h>

void firsttoexecute(void) __attribute__ ((constructor));

/**
 *firsttoexecute - function that executes before main
 *
 *Return: nothing
 */
void firsttoexecute(void)
{
printf("You're beat! and yet, you must allow,\n");
printf("I bore my house upon my back!\n");
}
