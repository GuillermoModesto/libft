#ifndef LIBFT_H
# define LIBFT_H
# include <stdlib.h>
# include <unistd.h>

int	ft_atoi(const char *nptr);
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
int		ft_strlcpy(char *dst, const char *src, int size);
int		ft_strlcat(char *dst, const char *src, int size);
char	*ft_strchr(const char *buf, int c);
char	*ft_strrchr(const char *buf, int c);
char	*ft_strnstr(const char *big, const char *little, int len);
char	*ft_strdup(const char *s);
char	*ft_substr(char const *s, unsigned int start, size_t len);
char	*ft_strjoin(char const *s1, char const *s2);
char	*ft_strtrim(char const *s1, char const *set);
char	*ft_itoa(int n);
char	*ft_strmapi(char const *s, char (*f)(unsigned int, char));
char	**ft_split(char const *s, char c);
void	ft_striteri(char *s, void (*f)(unsigned int, char*));
void	ft_bzero(void *s, int n);
void	*ft_memchr(const void *buf, int c, int count);
void	*ft_memcpy(void *dest, const void *src, int count);
void	*ft_memmove(void *dest, const void *src, int count);
void	*ft_memset(void *s, int c, int n);
void	*ft_calloc(int nelem, int elsize); 

#endif
