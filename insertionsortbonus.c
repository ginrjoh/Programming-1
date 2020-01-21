/*Ginger Johnson CMPSC 1113 - Section 02 - Computer Programming I
Insertion Sort Program*/

#include<stdio.h>

void swap(int *, int *);
void insertion(int [], int);

int main()
{
	
	//Declaration of variables:
	int i, s;
	
	//Ask user for array size
	printf("How many numbers would you like to be sorted?\n");
	scanf("%d", &s);
	int A[s];
	
	//Ask user for numbers in array
	printf("Please enter numbers to be sorted. Include spaces between numbers.\n");
	
	for(i=0; i<s; i++)
	{
		scanf("%d", &A[i]);
	}
	
	//Print out initial array:
	printf("A = [");
	for(i=0; i<s; i++)
	{
		printf("%d ",A[i]);
	}		
	printf("]\n");

	//Call insertion to sort it
	insertion(A,s);
	
	//Print out the sorted array
	printf("Sorted A = [");
	for(i=0; i<s; i++)
	{
		printf("%d ", A[i]);
	}
	printf("]\n");

	return 0;

}

//Swap subprogram
void swap(int *a, int *b)
{
	//Declare temp. Swap *a and *b
	int temp;
	temp = *a;
	*a = *b;
	*b = temp;
}

//Insertion subprogram
void insertion(int A[], int s)
{
	int i;
	/*Starting at the 2nd position of the array (index 1), find the correct
	sorted position to the left for element A[i]*/
	for(i=1; i<s; i++)
	{
		int j=i;
		while(j>0 && A[j-1]>A[j])
		{
			//Swap A[j-1] and A[j]
			swap(&A[j-1], &A[j]);
			
			//Decrease j by 1
			j = j-1;	
		}
	}
}
