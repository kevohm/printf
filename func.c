#include "main.h"
#include <stdio.h>

void print_str(va_list a){
    char *p = va_arg(a, char *);
    if(!p){
        return;
    }
    printf("%s\n", p);
}
 void print_ch(va_list a){
      printf("%c\n", va_arg(a, int));
 }
 void print_d(va_list a){
     printf("%d\n", va_arg(a, double));
 }
 void print_u(va_list a){
     printf("%u\n", va_arg(a, unsigned int));
 }
 void print_p(va_list a){
     printf("%p\n", va_arg(a, void*));
 }
 void print_o(va_list a){
     printf("%o\n", va_arg(a, int));
 }
  void print_Hx(va_list a){
     printf("%x\n", va_arg(a, int));
 }
   void print_HX(va_list a){
     printf("%X\n", va_arg(a, int));
 }
 void print_per(va_list a){
     printf("%%\n");
 }
 
