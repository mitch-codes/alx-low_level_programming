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
    int res;
    
    res = append_text_to_file("hi", "my name is test");
    printf("-> %i)\n", res);
    return (0);
}
