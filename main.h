#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdarg.h>

#ifndef MAIN_H
#define MAIN_H
int _putchar(char c);
int _puts(char *str);
int _printf(const char *format, ...);
void print_int(int n);
void print_unsigned(unsigned int n);
void print_hexagonal(int x);
void print_octal(int o);
void print_len(const char *s);
#endif
