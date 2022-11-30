#include <stdio.h>

/**
 * premain - prints a string before the main function is executed
 */

void __attribute__ ((constructor)) premain()
{
  printf("You're beat! and yet, you must allow,\nI bore my house upon my back!\n");
}

