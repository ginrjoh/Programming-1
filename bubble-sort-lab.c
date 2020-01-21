//Bubble sort lab

#include<stdio.h>
void swap(int *, int *);
void bubble(int [], int);
int main()
{
	int i, n;
	printf("Enter size of array:\n");
	scanf("%d",&n);
	int A[n];
	printf("Enter values of the array:\n");
	
	for(i=0; i<n; i++)
	{
		scanf("%d",&A[i]);
	}
	//Print out intital array
	printf("A=[");
	for(i=0; i<n; i++)
	{
		printf("%d ", A[i]);
	}
	printf("]\n");
	bubble(A,n);
	//Print out sorted array
	printf("Sorted A=[");
	for(i=0; i<n; i++)
	{
		printf("%d ", A[i]);
	}
	printf("]\n");
	return 0;
}

void swap(int *a, int *b)
{
	int temp;
	temp = *a;
	*a = *b;
	*b = temp;
}

void bubble(int A[], int n)
{
	int i, swapped = 1;
	while(swapped == 1)
	{
		swapped = 0;
		for(i=1; i<n; i++)
		{
			if(A[i-1]>A[i])
			{
				swap(&A[i-1], &A[i]);
				swapped = 1;
			}
		}
	}
}
