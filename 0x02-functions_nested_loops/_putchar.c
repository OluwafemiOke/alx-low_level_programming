#include "main.h"
#include <unistd.h>
/**
* _putchar – write the character c
* @c: The character
*
* Return : 1
* on error, -1 is returned 
*/ 
int _putchar(char c)
{
	return (write(1, &c, 1));
}
