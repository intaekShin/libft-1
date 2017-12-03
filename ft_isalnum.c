int		ft_isalnum(char c)
{
	if (c >= '0' && c <= '9')
		return (1);
	if (c >= 'A' && c <= 'Z')
		return (2);
	if (c >= 'a' && c <= 'z')
		return (3);
	return (0);
}
