#include <stdarg.h>
#include <unistd.h>
#include <stdio.h>
void ft_putchar(char c, int *ln)
{
	*ln += write(1,&c,1);
}

void ft_putstr(char *str, int *ln)
{
	if(!str)
		ft_putstr("(null)", ln);
	while(*str)
		ft_putchar(*str++, ln);

}

// void ft_puthex_neg(int n, int *ln)
// {
// 	char tab[16] = "0123456789abcdef";
// 	int i = 8;
// 	char hex_tab[9];
// 	if(n < 0)
// 		n = ~(-n) +1;
	
// 	while(--i >= 0)
// 	{
// 		hex_tab[i] = tab[n & 0xf];
// 		n >>= 4;
// 	}
// 	hex_tab[8] = '\0';
// 	ft_putstr(hex_tab, ln);

// }
char *get_next_line(int fd)
{
    int     i = 0;
    int     rd = 0;
    char    character;
    char     *buffer = malloc(10000);

    if (BUFFER_SIZE <= 0)
	return (free(buffer), NULL);
    while ((rd = read(fd, &character, BUFFER_SIZE - BUFFER_SIZE + 1)) > 0)
    {
        buffer[i++] = character;
        if (character == '\n')
            break;
    }
    if ((!buffer[i - 1] && !rd) || rd == -1)
    {
        free(buffer);
        return (NULL);
    }
    buffer[i] =  '\0';
    
void 	ft_puthex(unsigned int n,  int *ln)
{
	char tab[16] = "0123456789abcdef";
	long int x;
	x = (long int)n;
	// if(n < 0)
	// {
	// 	ft_putchar('-', ln);
	// 	x *= -1; 
	// }
	if(x > 15)
	{
		ft_puthex(x / 16, ln);
		ft_putchar(tab[x % 16],ln );

	}
	else
		ft_putchar(tab[x],ln );
}

void 	ft_putnbr(int n, int *ln)
{
	char tab[10] = "0123456789";
	long int x;
	x = (long int)n;
	if(n < 0)
	{
		ft_putchar('-', ln);
		x *= -1; 
	}
	if(x > 9)
	{
		ft_putnbr(x / 10, ln);
		ft_putchar(tab[x % 10],ln );
	}
	else
		ft_putchar(tab[x],ln );

}
void check(char *str, va_list arg, int *ln)
{
	if(*str == 's')
		ft_putstr(va_arg(arg, char *), ln);
	else if (*str == 'd')
		ft_putnbr(va_arg(arg, int), ln);
	else if (*str == 'x')
		ft_puthex(va_arg(arg, unsigned int), ln);


}
int ft_printf(char *str, ...)
{
	int i = -1;
	int ln = 0;
	va_list arg;

	va_start(arg, str);
	while(str[++i])
	{
		if(str[i] == '%')
			check(&str[++i], arg, &ln);
		else
			ft_putchar(str[i], &ln);
	}	
	return(ln);
}


#define TAB "looool", -696, -7777

int main()
{
	int ft;
	// int sys = -15;
	// char tab[4] = "lol";
	ft = ft_printf("ss1 %s  x %d ou hady X %x \n", TAB);

	// sys = printf("ss2 %s  x %d ou hady X %x \n", TAB);
	// printf("is ft %d\n is sys %d\n", ft, sys);
	// printf("is ft %d\n is sys %d\n",ft, sys);
}