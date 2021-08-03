#ifndef HOLBERTON_H
#define HOLBERTON_H

#include <stdarg.h>
#include <stdlib.h>
#include <unistd.h>

void prt_str(char *buff, int *b, int *bc, va_list vars);
int _printf(const char *format, ...);
void clearBuffer(char *buff, int *b, int *bc);
void prt_char(char *buff, int *b, int *bc, va_list vars);
void prt_int(char *buff, int *b, int *bc, va_list vars);

#endif /*HOLBERTON_H*/
