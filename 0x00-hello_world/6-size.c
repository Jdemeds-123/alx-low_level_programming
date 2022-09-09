#include <stdio.h>
/**
 * main - main block
 * Return: always 0
 */

int main(void)
{
	printf("Size of a char: %d byte(s)\n", sizesof(char));
	printf("Size of an int: %d byte(s)\n", sizeof(int));
	printf("Size of a long int: %d bytes(s)\n", sizeof(long int));
	printf("Size of a long long int: %d bytes(s)\n", sizeof(long long int));
       printf("Size of a float: %d bytes(s)\n", sizeof(float));
return (0);
}
