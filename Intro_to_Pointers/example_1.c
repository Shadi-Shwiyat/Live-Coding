#include <stdio.h>
  
/**
 * main - program declares and itializes
 * a pointer
 *
 * Return: Always 0 (success)
 */

int main(void)
{
        int num = 42;
	int *ptr = &num;

        printf("The value of num is: %d\n", num);
	printf("The value of ptr is: %p\n", (void *)ptr);
        return (0);
}
