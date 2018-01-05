#include "libft.h"

t_list	*ft_lstreturn(t_list *lst, size_t n)
{
	size_t	i;
	t_list	*tmp;
	t_list	*ptr;

	i = 0;
	ptr = lst;
	while (i < n)
	{
		tmp = ptr->next;
		ptr = tmp;
		i++;
	}
	return (ptr);
}
