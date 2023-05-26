#include <stdio.h>

/**
 * main - program changes value of num through
 * our pointer, and then assigns that value
 * to a new variable through the pointer
 *
 * Return: Always 0 (success)
 */

int main(void)
{
        int num = 42;
        int *ptr = &num;
	int new_var;

        printf("The value of num is: %d\n", num);
        printf("The value of ptr is: %p\n", (void *)ptr);
        printf("The Value ptr points to is: %d\n", *ptr);

	*ptr = 100;
	new_var = *ptr;

	printf("The updated value of num is: %d\n", num);
	printf("The value of our new variable is: %d\n", new_var);
        return (0);
}
