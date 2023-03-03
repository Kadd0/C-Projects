#include <unistd.h>

int main(int argc,char **argv)
{
	if(argc>1)
	{
		int i;
		i=0;
		argc--;
		while(argv[argc][i])
		{
			if('A'<=argv[argc][i] <='Z')
			{
				argv[argc][i] +=32;
				write(1,argv[argc][i]);
			}
			else if('a' <= argv[argc][i]<= 'z')
			{
				argv[argc][i] -= 32;
				write(1,&argv[argc][i],1);
			}
			else
			{
				write(1,argv[argc][i],1);
			}
		}
		
	}
	else
	{
		write(1,'\n',1);
	}
}
