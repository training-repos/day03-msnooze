char	*ft_strrev(char *str)
{
	int	i;
	int	j;
	char	tmp;

	i = 0;
	j = 0;
	while (str[i] != '\0')
		i++;
	i = i - 1;
	while (j < i)
	{
		tmp = str[i];
		str[i] = str[j];
		str[j] = tmp;
		i--;
		j++;
	}
	return (str);
}
