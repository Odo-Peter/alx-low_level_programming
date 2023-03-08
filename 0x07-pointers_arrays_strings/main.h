#ifndef MAIN_H
#define MAIN_H

int _putchar(char c);
char *_memset(void *s, int b, int n);
char *_memcpy(void *dest, void *src, int n);
char *_strchr(char *s, char c);
unsigned int _strspn(char *s, char *accept);
char *_strpbrk(char *s, char *accept);
char *_strstr(char *haystack, char *needle);
void print_chessboard(char (*a)[8]);
void print_diagsums(int *a, int size);

#endif
