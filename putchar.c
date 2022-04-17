#include <unistd.h>
#include "main.h"
/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
    return(write(1, &c, 1));
}
/**
 * print_o - prints octal
 * @a: va_arg instance
 * Return: nothing
 */
void print_o(va_list a)
{
    printf("%o", va_arg(a, int));
}
/**
 * print_Hx - prints hexadecimal
 * @a: va_arg instance
 * Return: nothing
 */
void print_Hx(va_list a)
{
    printf("%x", va_arg(a, int));
}
/**
 * print_HX - prints hexadecimal
 * @a: va_arg instance
 * Return: nothing
 */
void print_HX(va_list a)
{
    printf("%X", va_arg(a, int));
}
/**
 * print_per - prints percentage
 * @a: va_arg instance
 * Return: nothing
 */
void print_per(va_list a)
{
    printf("%%");
}
