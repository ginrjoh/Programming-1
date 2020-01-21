//Slots Game

#include<stdio.h>
#include<stdlib.h>

int main()
{
	//Variables
	int credits = 30, slot1, slot2, slot3, spins = 0;
	char dummy;
	time_t t;
	//initalize rand()
	srand(time(&t));

	printf("Welcome to the 0-1-2 Slots Game!\n You have %d credits.\n Cost of spin: 10 credits.\n Reach 100 credits to win game!\n", credits);
	printf("Rules: all 0s: +20 credits, all 1s: +25 credits, all 2s: +30 credits, match any two: +12 credits.\n Are you ready to play?\n");
	
	while(credits >= 10 && credits < 100)
	{
		printf("Press Enter to spin!\n");
		scanf("%c", &dummy);
		credits = credits - 10;
		spins++;
		slot1 = rand()%3;
		slot2 = rand()%3;
		slot3 = rand()%3;

		printf("[%d] [%d] [%d]\n", slot1, slot2, slot3);

		if(slot1 == slot2 && slot2 == slot3)
		{
			printf("Jackpot!\n");
			if(slot1 == 0) credits = credits + 20;
			if(slot1 == 1) credits = credits + 25;
			if(slot1 == 2) credits = credits + 30;
			printf("Current total: %d \n", credits);
			continue;
		}
		else if(slot1 != slot2 && slot2 != slot3 && slot1 != slot3)
		{
			printf("Current total: %d \n", credits);
			continue;
		}
		else
		{
			credits = credits + 12;
			printf("Current total: %d \n", credits);
		}
	}
	
	if(credits >= 100)
	{
		printf("You won with %d credits in %d spins!\n", credits, spins);
	}
	else 
	{
		printf("Not enough credits to continue. Game Over. %d spins\n", spins);
	}
	return 0;
}
