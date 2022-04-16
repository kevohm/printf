#ifndef MAIN_H
#define MAIN_H
#include <stdio.h>
#include <string.h>
#include <stdarg.h>
/**
 * struct dog - struct - dog
 * @p: operator
 * @f: function carrying operation
 */
 typedef struct object {
     char* p;
     void (*f)(va_list);
 } init;

 void _printf(char *format, ...);

 void print_str(va_list a);

 void print_ch(va_list a);

 void print_d(va_list a);

 void print_u(va_list a);

 void print_p(va_list a);

 void print_o(va_list a);

 void print_Hx(va_list a);

 void print_HX(va_list a);

 void print_per(va_list a);

 void print_i(va_list a);

#endif