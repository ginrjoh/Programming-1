/* While statement */

#include <stdio.h>

int main ()
{
	int i = 1;
	while(i < 101)
	{
		if(i % 7 == 0)
		{
			printf("%d is a multiple of 7 \n", i);
		}
		i = i + 1;
	}
	return 0;
}
