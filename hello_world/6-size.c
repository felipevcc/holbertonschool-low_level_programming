#include <stdio.h>
/**
 * main - Prints only a text
 * Description: This function print the text of the size
 * Return: 0
 */
int main(void)
{
printf("Size of a char: %ld bytes(s)\n", sizeof(char));
printf("Size of an int: %ld bytes(s)\n", sizeof(int));
printf("Size of a long int: %ld bytes(s)\”", sizeof(long int));
printf("Size of a long long int: %ld bytes(s)\n", sizeof(double));
printf("Size of a float: %ld bytes(s)\n", sizeof(float));
return (0);
}
