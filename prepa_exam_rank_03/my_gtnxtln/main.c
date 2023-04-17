#include "get_next_line.h"

int main()
{

	int h = open("get_next_lin.h", O_RDONLY);
	char *str = get_next_line(h);
	char *tmp = str;

	while(str)
	{
		printf("hada BUFFEER = --%d--\n", BUFFER_SIZE);
		fflush(stdout);
		printf("|%s|", str);
		fflush(stdout);

		free(tmp);
		str = get_next_line(h);
		tmp = str;

	}
	while(1){}
}