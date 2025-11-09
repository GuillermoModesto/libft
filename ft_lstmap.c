#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*map;
	t_list	*aux;

	if (!lst)
		return (NULL);
	map = NULL;
	while (lst)
	{
		aux = ft_lstnew(f(lst-> content));
		if (!aux)
		{
			ft_lstclear(&map, del);
			return (NULL);
		}
		ft_lstadd_back(&map, aux);
		lst = lst -> next;
	}
	return (map);
}
