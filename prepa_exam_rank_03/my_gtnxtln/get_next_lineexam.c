#include "get_next_line.h"


size_t ft_strlen_e(char *str)
{
	size_t i = 0;
	if(!str)
		return(0);
	while(str[i])
		i++;
	return (i);
}

char *ft_calloc_e(size_t cnt, size_t size)
{
	char *s;
	size_t i = -1;
	s = malloc(cnt * size);
	if(!s)
		return NULL;
	while(++i < cnt * size)
		s[i] = '\0';
	return(s);
}

void ft_strcat_e(char *dst, char *src)
{
	size_t i = -1;
	size_t lendst;

	if(!src)
		return(dst);
	lendst = ft_strlen(dst);
	while(src[++i])
		dst[lendst + i] = src[i];
	dst[lendst + i] = '\0';
}

char *ft_strjoin_e(char *s1, char *s2)
{
	char *str = NULL;
	size_t l1;
	size_t l2;

	if(!s1 && !s2)
		return NULL;
	l1 = ft_strlen_e(s1);
	l2 = ft_strlen_e(s2);
	str = ft_calloc_e(l1 + l2 + 1, sizeof(char));
	if(!str)
		return(NULL);
	ft_strcat_e(str, s1);
	ft_strcat_e(str, s2);
	if(s1)
		free(s1);
	return(str);
}

char *ft_substr_e(char *s, size_t star, size_t len)
{
	size_t i = 0;
	char *str = NULL;
	
	if(!s)
		return NULL;
	if(star > ft_strlen_e(s))
		len = 0;
	else if (len > ft_strlen_e(s) - star)
		len  = ft_strlen_e(s) - star;
	str = ft_calloc_e(len + 1 ,sizeof(char));
	if(!str)
		return NULL;
	i = 0;
	while(i < len && s[star])
		str[i++] = s[star++];
	str[i] = '\0';
	if(!str[0])
	{
		free(str);
		return NULL;
	}
	return str;
}

int srchnln(char *s)
{
	int i = 0;
	if(!s)
		return -1;
	while(s[i])
	{
		if(s[i] == '\n')
			return i;
		i++;
	}
	return -1;
}

char *toaloc(int fd, char *str, int *rd)
{
	char *tmp = NULL;
	int r = 1;
	while(srchnln(str) == -1 && r)
	{
		tmp = ft_calloc_e(BUFFER_SIZE, sizeof(char));
		if(!tmp)
			return NULL;
		r = read(fd, tmp, BUFFER_SIZE);
		if(r <=0 )
		{
			free(tmp);
			tmp = NULL;
			if( r < 0)
				return NULL;
		}
		str = ft_strjoin_e(str, tmp);
		if(tmp)
			free(tmp);
		tmp = NULL;
	}
	*rd = r;
	return str;

}


char *get_next_line_e(int fd)
{
	static char *str = NULL;
	char *tmp;
	char *toswitch;
	int rd;
	int stock;
	if(fd < 0 || BUFFER_SIZE <= 0)
		return NULL;
	stock = 0;
	str = toaloc(fd, str, &rd);
	toswitch = str;
	if(rd <= 0)
		stock = ft_strlen_e(str);
	else
		stock = srchnln(str);
	tmp = ft_substr_e(str, 0, stock + 1);
	if(!tmp)
		return NULL;
	str = ft_substr_e(str, stock + 1, ft_strlen_e(str));
	free(toswitch);
	if(r1 <= 0)
	{
		free(str);
		str = NULL;
	}
	return tmp;
	


}

// char *get_next_line(int fd)