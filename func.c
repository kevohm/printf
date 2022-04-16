#include "main.h"
#include <stdio.h>

void print_str(va_list a){
    char *p = va_arg(a, char *);
    if(!p){
        return;
    }
    printf("%s", p);
}
 void print_ch(va_list a){
      printf("%c", va_arg(a, int));
 }
 void print_d(va_list a){
     printf("%d", va_arg(a, double));
 }
 void print_u(va_list a){
     printf("%u", va_arg(a, unsigned int));
 }
 void print_i(va_list a)
 {
     printf("%i", va_arg(a, int));
 }
 void print_p(va_list a){
     printf("%p", va_arg(a, void*));
 }
 
