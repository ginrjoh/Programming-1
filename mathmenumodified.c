//Math Menu Example

#include <stdio.h>
#include <math.h>

/*
 Example Program
*/

//Declares the function 'menu'
int menu();
void ending();

int main() 
{
//Declaring variables
 	int selection, num1, num2, ans;
	float fnum1, fnum2, fans;

//Calling menu subprogram, storing returned value in selection variable
	 selection = menu();
 
//Start of while loop 
	while (selection != 8) 
	{
	//Start of switch statement
 		switch (selection) 
		{
 			//Addition
			case 1: 
			printf("Enter 1st number: ");
 			scanf("%d", &num1);
 			printf("Enter 2nd number: ");
 			scanf("%d", &num2);
 			ans = num1 + num2;
 			printf("%d + %d = %d\n", num1, num2, ans);
 			break;

			//Subtraction
 			case 2: 
			printf("Enter 1st number: ");
 			scanf("%d", &num1);
 			printf("Enter 2nd number: ");
 			scanf("%d", &num2);
 			ans = num1 - num2;
 			printf("%d - %d = %d\n", num1, num2, ans);
 			break;
			
			//Multiplication
 			case 3: 
			printf("Enter 1st number: ");
			scanf("%d", &num1);
 			printf("Enter 2nd number: ");
 			scanf("%d", &num2);
			ans = num1 * num2;
 			printf("%d * %d = %d\n", num1, num2, ans);
 			break;

			//Absolute value
			case 4:
			printf("Enter number: ");
			scanf("%d", &num1);
			ans = abs(num1);
			printf("|%d| = %d \n", num1, ans);
			break;

			//Division
			case 5:
			printf("Enter 1st number: ");
			scanf("%f", &fnum1);
			printf("Enter 2nd number (non-zero): ");
			fans = fnum1 / fnum2;
			printf("%f / %f = %f \n", fnum1, fnum2, fans);
			break;
	
			//Square Root
			case 6:
			printf("Enter number (non-negative): ");
			scanf("%f", &fnum1);
			fans = sqrt(fnum1);
			printf("Square-root (%f) = %f \n", fnum1, fans);
			break;

			//Raise 1st number to a power (2nd number)
			case 7:
			printf("Enter 1st number: ");
			scanf("%f", &fnum1);
			printf("Enter 2nd number: ");
			scanf("%f", &fnum2);
			fans = pow(fnum1, fnum2);
			printf("%f ^ %f = %f \n", fnum1, fnum2, fans);
			break;

 			default: 
			printf("%d is not a valid selection\n", selection);
 		}
	//Call menu again to ask user for input 
	selection = menu();
 	}
 ending();
}



int menu() 
{
 	int choice;
 //Menu options
	printf("1 Add\n");
 	printf("2 Subtract\n");
 	printf("3 Multiply\n");
	printf("4 Absolute Value\n");
	printf("5 Division\n");
	printf("6 Square root\n");
	printf("7 Power\n");
	printf("8 Quit\n");
 	printf("Enter a Selection: ");
 	if(scanf("%d", &choice)!=1)
	{
		printf("Invalid selection! Restart Program \n");
		return 8;	
		
	}
 	return choice;
}


void ending()
{
	printf("The program will now end. Until next time!\n");	
}
