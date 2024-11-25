name = libft

files = ft_atoi ft_bzero ft_isalnum ft_isalpha ft_isascii ft_isdigit ft_isprint ft_memchr ft_memcmp \
	ft_memcpy ft_memmove ft_memset ft_strchr ft_strlcat ft_strlcpy ft_strlen ft_strncmp ft_strnstr \
	ft_strrchr ft_tolower ft_toupper ft_calloc ft_strdup ft_substr

compiler = gcc

flags = -Wall -Wextra -Werror

outname = $(name).a

cfiles = $(files:%=%.c)

ofiles = $(files:%=%.o)

NAME = $(outname)

$(NAME):
	$(compiler) $(flags) -c $(cfiles) -I./
	ar -rc $(outname) $(ofiles)

all: $(NAME)

clean:
	rm -f $(NAME)
	rm -f $(ofiles)

fclean:
	clean
	rm -f $(NAME)

re: fclean all

.PHONY: all, clean, fclean, re
