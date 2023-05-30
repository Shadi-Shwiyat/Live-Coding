#include <stdio.h>
#include <unistd.h>

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
    	return (write(1, &c, 1));
}

/**
 * main - program prints a string to
 * the console using each individual
 * character with putchar and a loop
 *
 * Return: 0 (success)
 */

int main(void)
{
    	int i = 0;
   	int len = 0;
    	char *str = "Placeholder";
    	char arr_str[] = "Another Placeholder";

    	while (str[i] != '\0')
    	{
		_putchar(str[i]);
		i++;
    	}
    	_putchar('\n');

    	while (*str != '\0')
    	{
       		_putchar(*str);
		str++;
    	}
    	_putchar('\n');


    	i = 0;

    	while (arr_str[len] != '\0')
    	{
		len++;
    	}

    	while (i < len)
   	{
		_putchar(arr_str[i]);
		i++;
    	}
    	_putchar('\n');

}
