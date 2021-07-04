#ifndef GLOBAL_UTILS_H
# define GLOBAL_UTILS_H

#include <stdlib.h>
#include "../utility/ft_types.h"

int		ft_strcmp(const char *s1, const char *s2);
size_t	ft_strlen(const char *str);
void	*ft_memset(void *b, int c, size_t len);
int		ft_isalpha(int c);
int		ft_isdigit(int c);
int		ft_isalnum(int c);
int		ft_isspecial(int c);
void	ft_bzero(void *s, size_t n);
char	*ft_itoa(int n);
char	**ft_split(const char *ss, char c);
char	*ft_strdup(const char *s);
int		ft_atoi(char *str);

char	*strjoin_s(char *s, char *s2, t_bool free_);
char	*strjoin_c(char *s, char c, t_bool free_);

# endif
