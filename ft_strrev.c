void ft_putstr(char *c);

char	*ft_strrev(char *str)
{
	int i;
	int j;
	char *c;

	j = 0;
	i = 0;
	while (str[j] != '\0')
	{
		while (str[i] != '\0')
		{
			i++;	
		}	
		str[j]= str[i];
		c = str[j];
		i--;
		j++;
	}
	ft_putstr(c);
	return (c);

}


int 	main(void)
{
	char *str;

	str = "abcde";
	ft_strrev(str);
	return (0);
}
