
//Unit Converter

#include <stdio.h>

int main ()
{
	int status, option;
	float feet, meters;
	status = 1;
	while(status == 1)
	{
		printf("****** Unit Converter ****** \n");
		printf("Enter 0 to convert feet to meters \nEnter 1 to convert meters to feet \n");
		scanf("%d", & option);
		
		if(option == 0)
		{
			printf("Enter feet (in decimal form): \n");
			scanf("%f", & feet);

			meters = 0.3048 * feet;
			printf("%f feet = %f meters \n", feet, meters);
			printf("Enter 0 to quit, or 1 to continue \n");
			scanf("%d", & status);
		}
		else if(option == 1)
		{
			printf("Enter meters (in decimal form): \n");
			scanf("%f", & meters);

			feet = 3.28084 * meters;
			printf("%f meters = %f feet \n", meters, feet);
			printf("Enter 0 to quit, or 1 to continue \n");
			scanf("%d", & status);
		}

		else
		{
			printf("Not a valid option, try again \n");
		}
	}
	return 0;
}
