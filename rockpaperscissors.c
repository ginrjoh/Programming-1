/*Ginger Johnson CMPSC 1113 - Section 02 - Computer Programming I
Rock Paper Scissors Game*/

#include<stdio.h>
#include<stdlib.h>


int main()
{

	//Declare variables, time used as seed for random number generator
	int status=1, choice, number, win=0, lose=0;
	time_t t;
	
	//While loop used so user can choose to keep playing or quit.
	while(status == 1)
	{
		//Enter your choice:
		printf(" ___    ____    ()()\n");
		printf("/   \\   \\   \\    \\/\n");
		printf("\\___/    \\___\\   /\\\n");
		printf("\n");
		printf("Enter 0 for Rock, 1 for Paper, or 2 for Scissors:\n");
		scanf("%d", &choice);
	
		if(choice == 0)
		{
			printf("You entered: Rock\n");
		}
	
		else if(choice == 1)
		{
			printf("You entered: Paper\n");
		}
		else if (choice == 2)
		{
			printf("You entered: Scissors\n");
		}
		
		else
		{	
			printf("Invalid input, try again\n");
			continue;	
		}

	//Initialize random number generator (give current time as seed)
		srand(time(&t));

	//Generate either 0 or 1, store as number:
		number=rand()%3;
		
	//Convert random number to Rock, paper, or scissors (to tell user)	
		if(number == 0)
		{
			printf("Computer choose: Rock\n");
		}
		
		else if(number == 1)
		{
			printf("Computer choose: Paper\n");
		}
		
		else
		{
			printf("Computer choose: Scissors\n");
		}

	//Check for tie
		if(choice == number)
		{
			printf("You Tied...\n");
		}
		
		//Check each combination for win or loss
		else if(choice == 0 && number == 1)
		{
			printf("Paper covers Rock. You Lose...\n");
			lose = lose+1;
		}
		
		else if(choice == 0 && number == 2)
		{
			printf("Rock breaks Scissors. You Win!\n");
			win = win+1;
		}
		
		else if(choice == 1 && number == 0)
		{
			printf("Paper covers Rock. You Win!\n");
			win = win+1;
		}
		
		else if(choice == 1 && number == 2)
		{
			printf("Scissors cut Paper. You Lose...\n");
			lose = lose+1;
		}
		
		else if(choice == 2 && number == 0)
		{
			printf("Rock breaks Scissors. You Lose...\n");
			lose = lose+1;
		}
		
		else if(choice == 2 && number == 1)
		{
			printf("Scissors cut Paper. You Win!\n");
			win = win+1;
		}

	//Ask user if they want to play again if not a tie:
		if(choice != number)
		{
			printf("Enter 1 to continue, 0 to quit.\n");
			scanf("%d", &status);
		}
		
	}	
	
	//Final score:

	printf("You won: %d games, you lost: %d games\n", win, lose);
	
	if(lose == 0)
	{
		printf("Perfect score!\n");
	}

	return 0;
}






  
