#ifndef MAIN_H
#define MAIN_H
#ifndef NULL
#define NULL ((void *)0)
#endif
char	*create_array(unsigned int size, char c);
char	*_strdup(char *str);
int	_length(char *s);
char	*str_concat(char *s1, char *s2);
int	**alloc_grid(int width, int height);
void	initialize(int **m, int w, int h);
#endif
