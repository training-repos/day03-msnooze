int	ft_atoi(char *str)
{
	int a;
	int b;

	a = 0;
	b = 0;
	while (str[a] >= '0' && str[a] <= '9')
	{
		b = b * 10;
		b = b +  str[a] - '0';
		a++;
	}
	return(b);
}
