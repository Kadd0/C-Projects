#include <unistd.h>

void ft_writenumber(int number)
{
	if(number>9
		ft_writenumber(number/10);
	write(1,&"0123456789"[number%10],1);
}
int main()
{
	int number;
	number=1;

	while(number<=100)
	{
		if(number%3 == 0 && number%5==0)
			write(1,"fizzbuzz",8);
		else if(number%3==0)
			write(1,"fizz",4);
		else if(number%5==0)
			write(1,"buzz",4);
		else
			ft_writenumber(number);
		write(1,"\n",1);
		number++;
	}

}
