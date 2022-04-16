#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <string.h>

int _printf(const char *format, ...)
{
    va_list list;
    init listOf[] = {{"s", print_str}, {"c", print_ch}, {"d", print_d}, {"p", print_p}, {"u", print_u}, {"x", print_Hx}, {"X", print_HX}, {"o", print_o}, {"i", print_i}};
    int i = 0, j = 0, count = 0, check = 0;

    va_start(list, format);
    if (format == NULL)
    {
        return (-1);
    }
    while (format[i] != '\0')
    {
        j = 0;
        if (format[i] == '%')
        {
            check = count;
            if (format[i + 1] == '%')
            {
                print_per(list);
                i++;
                count++;
            }else{

                while (j < 9)
                {
                    if (format[i + 1] == *(listOf[j].p))
                    {
                        listOf[j].f(list);
                        i++;
                        count++;
                    }
                    j++;
                
            }
            if (check == count)
            {
                printf("%c", format[i]);
            }
            }
        }
        else
        {
            printf("%c", format[i]);
            count++;
        }
        
        i++;
    }
    va_end(list);
    printf("\n");
    return (count);
}