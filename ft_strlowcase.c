char	*ft_strlowcase(char *str)
{
	char *i;
	
	i = str;

	while (*i)
	{
		if (*i >= 'A' && *i <= 'Z')
			*i = *i + 32;
		i++;
	}
	return (str);
}
