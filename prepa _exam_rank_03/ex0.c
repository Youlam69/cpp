#include <unistd.h>
#include <stdarg.h>
#include <stdio.h>

// int	ft_printf(const char *str, ...);
void ft_putchar(char c, int *ln)
{
	*ln += write(1, &c, 1);
}
void ft_putstr(char *str, int *ln)
{
	if (!str)
		ft_putstr("null", ln);
	while (*str)
		*ln += write(1, str++, 1);
}

void printhex_neg(int n, int *ln)
{
	int num_digits = sizeof(int) * 2; // Number of digits in the hexadecimal representation (assuming int is 4 bytes)
	int i = 8;
	char hex_digits[] = "0123456789abcdef"; // Array of hexadecimal digits
	char hex_str[num_digits];				// Array to store the hexadecimal string

	if (n < 0)
		n = ~(-n) + 1;

	while (--i >= 0)
	{
		hex_str[i] = hex_digits[n & 0xf];
		n >>= 4;
	}
	hex_str[num_digits] = '\0'; // Null-terminate the hex_str

	ft_putstr(hex_str, ln);
}

void printhex(int n, int *ln)
{
	long int x;
	char tab[17] = "0123456789abcdef";

	x = (long int)n;

	if (n < 0)
		printhex_neg(n, ln);
	else if (x > 15)
	{
		printhex(x / 16, ln);
		*ln += write(1, &tab[x % 16], 1);
	}
	else
		ft_putchar(tab[x], ln);
}

void ft_putnbr(int n, int *ln)
{
	long int x;
	char tab[10] = "0123456789";

	x = (long int)n;

	if (n < 0)
	{
		ft_putchar('-', ln);
		x *= -1;
	}
	if (x > 9)
	{
		ft_putnbr(x / 10, ln);
		ft_putchar(tab[x % 10], ln);
	}
	else
		ft_putchar(tab[x], ln);
}

void chek(const char *str, va_list arg, int *ln)
{
	if (*str == 'i' || *str == 'd')
		ft_putnbr(va_arg(arg, int), ln);
	else if (*str == 's')
		ft_putstr(va_arg(arg, char *), ln);
	else if (*str == '%')
		ft_putstr("%", ln);
	else if (*str == 'x' || *str == 'X')
		printhex(va_arg(arg, unsigned int), ln);
}

int ft_printf(const char *str, ...)
{
	va_list arg;
	int i;
	int ln;

	i = 0;
	ln = 0;
	va_start(arg, str);
	while (str[i])
	{
		if (str[i] == '%')
			chek(&str[++i], arg, &ln);
		else
			ft_putchar(str[i], &ln);
		i++;
	}

	return (va_end(arg), ln);
}

#define TAB "looool", -696, -16

int main()
{
	int ft;
	int sys = -15;
	// char tab[4] = "lol";
	ft = ft_printf("ss1 %s  x %d ou hady X %x \n", TAB);

	sys = printf("ss2 %s  x %d ou hady X %x \n", TAB);
	printf("is ft %d\n is sys %d\n", ft, sys);
	// printf("is ft %d\n is sys %d\n",ft, sys);
}