//Command line input lab

#include <stdio.h>
#include<stdlib.h>

int main(int argc, char *argv[])
{
	int i, num, sum, product, max, min;
	printf("You entered %d arguments\n", argc);
	
	if(argc == 1)
	{
		printf("No input entered. Program will end.\n");
		return 0;
	}
	else
	{
		//sscanf(argv[1], "%d", &num);
		num = atoi(argv[1]);
		sum = num;
		product = num;
		max = num;
		min = num;
		
		for(i = 2; i < argc; i++)
		{
			//sscanf(argv[i], "%d", &num);
			num = atoi(argv[i]);
			sum = sum + num;
			product = product * num;

			if(num >= max) max = num;
			if(num <= min) min = num;
		}
	}
	printf("The sum is %d \n", sum);
	printf("The product is %d \n", product);
	printf("The max is %d \n", max);
	printf("The min is %d \n", min);
	return 0;
}
