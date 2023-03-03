#include <unistd.h>

int main(int argc,int **argv)
{
	int i;
	i=0;
	if(ac>1)
	{
	argc--;
	while(argv[argc][i])
	{
		write(1,&argv[argc][i],1);
		i++;
	}
	}
}
