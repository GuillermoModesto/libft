#ifndef LIBFT_H
# define LIBFT_H
# include <stdlib.h>
# include <unistd.h>

int		ft_atoi(const char *nptr);
int		ft_isalnum(int c);
int		ft_isalpha(int c);
int		ft_isascii(int c);
int		ft_isdigit(int c);
int		ft_isprint(int c);
int		ft_memcmp(const void *buf1, const void *buf2, int count);
int		ft_strlen(const char *s);
int		ft_strncmp(const char *str1, const char *str2, int count);
int		ft_tolower(int c);
int		ft_toupper(int c);
void	ft_bzero(void *s, int n);
void	*ft_memchr(const void *buf, int c, int count);
void	*ft_memcpy(void *dest, const void *src, int count);
void	*ft_memmove(void *dest, const void *src, int count);
void	*ft_memset(void *s, int c, int n);
char	*ft_strchr(const char *buf, int c);
char	*ft_strlcat(char *dst, const char *src, int size);
char	*ft_strlcpy(char *dst, const char *src, int size);
char	*ft_strrchr(const char *buf, int c);
char	*ft_strnstr(const char *big, const char *little, int len);
void	*ft_calloc(int nelem, int elsize);
char	*ft_strdup(const char *s);
char	*ft_substr(char const *s, unsigned int start, size_t len);

#endif
