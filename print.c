#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <string.h>

void _printf(char *format, ...)
{
    va_list list;
    init listOf[] = {{"%s", print_str}, {"%c", print_ch}, {"%d", print_d}, {"%p", print_p}, {"%u", print_u}, {"%x", print_Hx}, {"%X", print_HX}, {"%o", print_o}};
    int i = 0, j = 0;

    va_start(list, format);
    if (format == NULL)
    {
        return;
    }
    while (format[i])
    {
        if (format[i] == '%')
        {
            if (format[i + 1] == '%')
            {
                print_per(list);
                continue;
            }
            while (j < 8)
            {
                if (format[i] == *(listOf[j].p))
                {
                    listOf[j].f(list);
                }
                j++;
                i++;
            }
        }
        else
        {
            printf("%c", format[i]);
        }
        i++;
    }
    va_end(list);
    printf("\n");
}