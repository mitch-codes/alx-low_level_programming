#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    ssize_t n;
    
    n = read_textfile("hi", 0);
    printf("\n(printed chars: %li)\n", n);
    n = read_textfile("hi", 1);
    printf("\n(printed chars: %li)\n", n);
    return (0);
}
