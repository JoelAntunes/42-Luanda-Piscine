int	ft_iterative_factorial(int nb);

int	ft_iterative_factorial(int nb)
{
	int	fatorial;

	fatorial = nb;
	if (nb < 0 || nb > 12)
	{
		return (0);
	}
	if (nb == 0)
	{
		fatorial++;
	}
	while (nb > 1)
	{
		fatorial *= --nb;
	}
	return (fatorial);
}
