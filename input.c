//input/output, variables, arithmetic

#include <stdio.h>

int main()

{
	int a,b;
	printf("Enter first interger: \n");
	scanf("%d", & a);
	
	printf("Enter second interger: \n");
	scanf("%d", & b);
	
	//Arithmetic
	
	printf("The sum is: %d \n", a + b);
	printf("The difference is: %d \n", a - b);
	printf("The product is: %d \n", a * b);
	printf("The ratio is: %f \n", (float) a/b);
	
	//How much memory needed for int?
	
	printf("The memory needed for an int is %ld bytes \n", sizeof(a));
	
	return 0;
}