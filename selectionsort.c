/*Ginger Johnson CMPSC 1113 - Section 02 - Computer Programming I
Selection Sort Program*/

#include<stdio.h>

void swap(int *, int *);
void selection(int [], int);

int main()
{
	//Declaration of variables:
	int i, n;
	
	//Ask user for array size
	printf("How many numbers would you like to be sorted?\n");
	scanf("%d", &n);
	int A[n];
	
	//Ask user for numbers in array
	printf("Please enter numbers to be sorted. Include spaces between numbers.\n");
	
	for(i = 0; i < n; i++)
	{
		scanf("%d", &A[i]);
	}
	
	//Print out initial array:
	printf("A = [");
	for(i = 0; i < n; i++)
	{
		printf("%d ",A[i]);
	}		
	printf("]\n");

	//Call selection to sort it
	selection(A,n);
	
	//Print out the sorted array
	printf("Sorted A = [");
	for(i = 0; i < n; i++)
	{
		printf("%d ", A[i]);
	}
	printf("]\n");

	return 0;
}

void swap(int *a, int *b)
{
	//Declare temp, Swap *a and *b
	int temp;
	temp = *a;
	*a = *b;
	*b = temp;
}

void selection(int A[], int n)
{
	int i, j;
	for(i = 0; i < n-1; i++)
	{
		int min = i;
		for(j = i+1; j < n; j++)
		{
			if(A[j] < A[min])
			{
				min = j;
			}
		}
		if (min != i)
		{
			swap(&A[i], &A[min]);
		}
	}
}
