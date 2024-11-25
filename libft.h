#ifndef LIBFT_H
# define LIBFT_H

int		ft_atoi(const char *nptr);
void	ft_bzero(void *s, int n);
int		ft_isalnum(int c);
int		ft_isalpha(int c);
int		ft_isascii(int c);
int		ft_isdigit(int c);
int		ft_isprint(int c);
void	*ft_memchr(const void *buf, int c, int count);
int		ft_memcmp(const void *buf1, const void *buf2, int count);
void	*ft_memcpy(void *dest, const void *src, int count);
void	*ft_memmove(void *dest, const void *src, int count);
void	*ft_memset(void *s, int c, int n);
char	*ft_strchr(const char *buf, int c);
char	*ft_strlcat(char *dst, const char *src, int size);
char	*ft_strlcpy(char *dst, const char *src, int size);
int		ft_strlen(const char *s);
int		ft_strncmp(const char *str1, const char *str2, int count);
char	*ft_strrchr(const char *buf, int c);
int		ft_tolower(int c);
int		ft_toupper(int c);
char	*ft_strnstr(const char *big, const char *little, int len);
void	*ft_calloc(int nelem, int elsize);
char	*ft_strdup(const char *s);

#endif
