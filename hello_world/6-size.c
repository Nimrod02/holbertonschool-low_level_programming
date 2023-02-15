#include <stdio.h>
/**
 * main - Print the size of various types on the computer
 *
 * Return: always 0
 */
int main(void)
{

char charType;
int intType;
long int longIntType;
long long int longLongIntType;
float floatType;

printf("Size of char: %zu byte(s)\n", sizeof(char));
printf("Size of int: %zu byte(s)\n", sizeof(int));
printf("Size of long int: %zu byte(s)\n", sizeof(long int));
printf("Size of long long int: %zu byte(s)\n", sizeof(long long int));
printf("Size of float: %zu byte(s)\n", sizeof(float);
return (0);
}

