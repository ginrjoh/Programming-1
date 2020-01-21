/*
Ginger Johnson CMPSC 1113 - Section 02 - Computer Programming I
Math Menu Extended Modified
*/

#include <stdio.h>
#include <math.h>
#define size 20

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
	int i, j, number, f[size], table[10][10];

	//Calling menu subprogram, storing returned value in selection variable
	 selection = menu();
 
	//Start of while loop 
	while (selection != 10)
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

			//Absolute Value
 			case 4: 
			printf("Enter  number: ");
			scanf("%d", &num1);
			ans = abs(num1);
 			printf("|%d| = %d\n", num1, ans);
 			break;
			
			//Division
 			case 5: 
			printf("Enter 1st number: ");
			scanf("%f", &fnum1);
 			printf("Enter 2nd number (non-zero): ");
 			scanf("%f", &fnum2);
			fans = fnum1 / fnum2;
 			printf("%f / %f = %f\n", fnum1, fnum2, fans);
 			break;
		
			//Square Root
 			case 6: 
			printf("Enter  number (non-negative): ");
			scanf("%f", &fnum1);
			fans = sqrt(fnum1);
 			printf("Square-root(%f) = %f\n", fnum1, fans);
 			break;
		
			//Raise 1st number to a power (2nd number)
 			case 7: 
			printf("Enter 1st number: ");
			scanf("%f", &fnum1);
 			printf("Enter 2nd number: ");
 			scanf("%f", &fnum2);
			fans = pow(fnum1, fnum2);
 			printf("%f ^ %f = %f\n", fnum1, fnum2, fans);
 			break;
			
			//Fibonacci numbers
			case 8:
			f[0] = 1;
			f[1] = 1;
			for (i = 2; i < size; i++)
			{
				f[i] = f[i-1] + f[i-2];
			}
			//Print Fibonacci numbers
			for (i = 0; i < size; i++)
			{
				printf("%d \n", f[i]);
			}
			break;
			
			//Table of Multiples of Three
			case 9:
			number = 1;
			for (i = 0; i < 10; i++)
			{
				for (j = 0; j < 10; j++)
				{
					table[i][j] = number * 3;
					number++;
				}
			}
			//Print Table
			for (i = 0; i < 10; i++)
			{
				for (j = 0; j < 10; j++)
				{
					printf("%d ", table[i][j]);
				}
				printf("\n");
			}
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
	printf("5 Divison\n");
	printf("6 Square Root\n");
	printf("7 Power\n");
	printf("8 Fibonacci Numbers\n");
	printf("9 Multiples of Three\n");
	printf("10 Quit\n");
 	printf("Enter a Selection: ");
 	if(scanf("%d", &choice)!=1)
	{
		printf("Invalid selection! Restart Program \n");
		return 10;	
		
	}
 	return choice;
}


void ending()
{
	printf("The program will now end. Until next time!\n");	
}

