/*Ginger Johnson CMPSC 1113 - Section 02 - Computer Programming I
Sieve of Eratosthenes*/

#include<stdio.h>
#include<math.h>

int main()
{
	int n, i, j;
	printf("Enter number to test:");
	scanf("%d",&n);
	
	int prime[n+1];
	for(i=2; i <= n; i++)
	{
		prime[i] = 1;
		
	}
	
	for(i=2; i <= floor(sqrt(n)); i++)
	{
		if (prime[i] == 1)
		{
			for(j=2; i*j <= n; j++)
			{
				prime[i*j]=0;
			}
		}
	}
	
	printf("Prime numbers less than %d:\n", n);
	for(i=2; i <= n; i++)
	{
		if(prime[i] == 1)
		{
			printf("%d ", i);
		}
	}
	printf("\n");
	return 0;
}