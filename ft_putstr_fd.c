#include "libft.h"

void	ft_putstr_fd(char *s, int fd)
{
	int	i;

	i = 0;
	if (!s)
		return ;
	while (str[i])
	{
		write (fd, s, 1);
		i++;
	}
}
