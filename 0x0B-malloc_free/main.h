#ifndef MAIN_H
#define MAIN_H
#ifndef NULL
#define NULL ((void *)0)
#endif
int	_putchar(char c);
char	*create_array(unsigned int size, char c);
char	*_strdup(char *str);
char	*str_concat(char *s1, char *s2);
int	nbr_of_char(char *str);
int	**alloc_grid(int width, int height);
#endif