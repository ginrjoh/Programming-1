//Fibonacci numbers and 2d array example
#include <stdio.h>
#define size 20
int main ()
{
	int i,j,number,f[size],table[10][10];
	
	//Fibonacci numbers
	f[0] = 1;
	f[1] = 1;
	for(i = 2; i < size; i++)
	{
		f[i] = f[i-1] + f[i-2];
	}
	
	//Print Fibonacci numbers
	for (i = 0; i < size; i++)
	{
		printf("%d \n", f[i]);
	}
	
	//2d array example
	number = 1;
	for(i = 0; i < 10; i++)
	{
		for(j = 0; j < 10; j++)
		{
			table [i][j] = number;
			number++;
		}
	}
	
	//Print 2d array
	for(i = 0; i < 10; i++)
	{
		for(j = 0; j < 10; j++)
		{
			printf("%d ", table[i][j]);
		}
		printf("\n");
	}
	return 0;
}
