#ifndef LIBFT_H
# define LIBFT_H
# include <unistd.h>
# include <stdlib.h>

int				ft_isalnum(char c);
void			ft_putchar(char c);
void			ft_putstr(char *str);
int				ft_strlen(char *str);
void			ft_putnbr(int nb);
int				ft_atoi(char *str);
char			*ft_strcpy(char *dest, char *src);
char			*ft_strncpy(char *dest, char *src, unsigned int n);
char			*ft_strstr(char *str, char *to_find);
int				ft_strcmp(const char *s1, const char *s2);
int				ft_strncmp(const char *s1, const char *s2, size_t n);
char			*ft_strupcase(char *str);
char			*ft_strlowcase(char *str);
char			*ft_strcapitalize(char *str);
int				ft_str_is_alpha(char *str);
int				ft_str_is_numeric(char *str);
int				ft_str_is_lowercase(char *str);
int				ft_str_is_uppercase(char *str);
int				ft_str_is_printable(char *str);
char			*ft_strcat(char *dest, char *src);
char			*ft_strncat(char *dest, char *src, int nb);
unsigned int	ft_strlcat(char *dest, char *src, unsigned int size);
unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size);
void			ft_bzero(void *s, size_t n);
char			*ft_strdup(char *s1);
char			*ft_strnstr(char *str, char *to_find, int len);
int				ft_isalpha(char c);
int				ft_isdigit(char c);
int				ft_isascii(char c);
int				ft_isprint(char c);
char			ft_toupper(char c);
char			ft_tolower(char c);
void			*ft_memset(void *b, int c, size_t len);
void			*ft_memcpy(void *restrict dst, const void *restrict src, size_t n);
void			*ft_memccpy(void *restrict dst, const void *restrict src, int c, size_t n);
void			*ft_memmove(void *dst, const void *src, size_t len);
#endif
