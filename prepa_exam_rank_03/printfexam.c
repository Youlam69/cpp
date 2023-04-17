#include <unistd.h>
#include <stdarg.h>

void ft_putstr(char *str, int *ln)
{
	if (!str)
		ft_putstr("null", ln);
	while(str)
		*ln += write(1,str++,1);
}

void ft_putnbr(int	n, int *ln)
{
	long int	x;
	char		tab[11] = "0123456789";

	x = (long int)n;

	if ( n < 0)
	{
		write(1,"-",1);
		x *= -1;
	}
	if(x > 9)
	{
		ft_putnbr(x / 10, ln);
		*ln += write(1,&tab[x % 10],1);
	}
	else
		*ln = write(1,&tab[x],1);
}

void	chek(const char *str, va_list arg, int *ln)
{
	if (*str == 'i' || *str == 'd')
		ft_putnbr(va_arg(arg, int), ln);
	else if (*str == 's')
		ft_putstr(va_arg(arg, char *), ln);
	else if (*str == '%')
		ft_putstr("%", ln);
	// else if (*str == 'x' || *str == 'X')
	// 	prnthex(va_arg(arg, unsigned int), *str);
}

int	ft_printf(const char *str, ...)
{
	va_list	arg;
	int		i;
	int		ln;

	i = 0;
	va_start(arg, str);
	while (str[i])
	{
		if (str[i] == '%')
			chek(&str[++i], arg, &ln);
		else
			ft_putstr((char *)str+i, &ln);
		i++;
	}

	return (va_end(arg), ln);
}

int main()
{
	ft_printf("hi mom %s  x %d ou hady c");
}