#include <stdio.h>
  
/**
 * main - program adds a print statement
 * to show how the pointer points to the
 * value of num
 *
 * Return: Always 0 (success)
 */

int main(void)
{
        int num = 42;
        int *ptr = &num;

        printf("The value of num is: %d\n", num);
        printf("The value of ptr is: %p\n", (void *)ptr);
	printf("The Value ptr points to is: %d\n", *ptr);
        return (0);
}
