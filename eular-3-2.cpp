#include <stdio.h>
#include <string.h>
#include <conio.h>
#include <stdlib.h>


int isprime(int n)
{
	int i = 2;
	while(i*i <= n)
	{
		if((n % i) == 0)
		{
				return 0;
		}
		++i;
	}
	return 1;
}
int main(int argc, char *argv[])
{
	unsigned long long int a = 0, max;
	unsigned long long int b = 600851475143;
	a = 2;
	while(b != 1)
	{
		if(isprime(a) && ((b%a)==0))
		{
				max = a;
				b = b / a;
		}
		else
		{
			++a;
		}
	}
	printf("%d\n", max);
	getch();

	return 0;
}
