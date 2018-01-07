#include "libft.h"

static t_list	**ft_lstdelim(char *s, char c)
{
	t_list	**head;
	t_list	*lst;
	t_list	*start;
	char	*tmp;
	int		i;
	int		j;
	int		first;

	i = 0;
	j = 0;
	first = 0;
	while (s[i] != '\0')
	{
		if (!(s[i] == c))
		{
			j++;
			if (s[i + 1] == '\0')
				i++;
		}
		if (s[i] == c || s[i] == '\0')
		{
			tmp = ft_strndup(s + (i - j), j);	
			if (first == 0)
			{
				if(!(lst = ft_lstnew(tmp, j + 1)))
					return (NULL);
				start = lst;
				first = 1;
			}
			else
			{
				if(!(lst->next = ft_lstnew(tmp, j + 1)))
					return (NULL);
				lst = lst->next;
			}
			j = 0;
			if (s[i] == '\0')
				i--;
		}
		i++;
	}
	head = &start;
	return (head);
}

t_list			**ft_lststrsplit(char const *s, char c)
{	
	char	*one;
	char	*two;
	t_list	**three;

	one = ft_strtrimselect(s, c);
	two = ft_removeselect(one, c);
	three = ft_lstdelim(two, c);
	return (three);
}
