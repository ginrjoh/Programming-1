//Insertion Sort

#include<stdio.h>

void insertion(int[])
int main()
{
	//Declaration of variables:
	int i,A[15]={10,4,3,7,1,8,6,2,9,5,15,12,13,14,11};
	
	//Print out initial array:
	printf("A = [");
	for(i=0; i<15; i++)
	{
		printf("%d ",A[i]);
	}		
	printf("]\n");

	//Starting at the 2nd position of the array (index 1), find the correct
	//sorted position to the left for element A[i] 
	/*for(i=1; i<15; i++)
	{
		int j=i;
		while(j>0 && A[j-1]>A[j])
		{
			//Swap A[j-1] and A[j]
			int temp;
			temp = A[j];
			A[j] = A[j-1];
			A[j-1] = temp;
			//Decrease j by 1
			j = j-1;	
		}
	}*/
	
	insertion(&A[0]);

	//Print out the sorted array
	printf("Sorted A = [");
	for(i=0; i<15; i++)
	{
		printf("%d ", A[i]);
	}
	printf("]\n");

	return 0;

}

void insertion(int A[])
{
	for(i=1; i<15; i++)
	{
		int j=i;
		while(j>0 && A[j-1]>A[j])
		{
			/*Swap A[j-1] and A[j]
			int temp;
			temp = A[j];
			A[j] = A[j-1];
			A[j-1] = temp;*/
			swap(A[j-1], A[j]);
			//Decrease j by 1
			j = j-1;	
		}
	}
}

void swap(A[j-1], A[j])
{
	int temp;
	temp = A[j];
	A[j] = A[j-1];
	A[j-1] = temp;
}