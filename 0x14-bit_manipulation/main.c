#include <stdio.h>
#include "main.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    ssize_t n;
    
    n = read_textfile("hi", 3);
    printf("\n(printed chars: %li)\n", n);
    n = read_textfile("hi", 4);
    printf("\n(printed chars: %li)\n", n);
    return (0);
}
