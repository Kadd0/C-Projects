#include <unistd.h>
#include <stdio.h>
int strLen(*str)
{
	int i;
	i=0;
	while(str[i])
	{
		i++;
	}
	return(i);
}


void *ft_rev_print(char *str)
{	
	int len;
	len=strLen(str)
	len--;
	int i;
	i=0;
	int swap;
	while(str[i] && i<len)
	{
		swap=str[i];
		str[i]=str[len];
		str[len]=swap;
		i++;
		len--;
	}
	return(str);
}

int main()
{	
	char array[]="kadir";
	printf("%s",ft_rev_print);
}
