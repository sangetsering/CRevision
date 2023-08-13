//program on selection sorting

#include<stdio.h>

int main()
{
	int i,j,N;
	int array[100],temp=0;
	
	printf("Enter the number of element: ");
	scanf("%d",&N);
	printf("\nEnter the element one after another:");
	for(i=0;i<N;i++)
		scanf("%d",&array[i]);
	
	//sorting using selection technique
	
    for(i = 0; i < N-1; i++)
    {
         for(j = 0; j < N-i-1; j++) 
		 {
           if(array[j] > array[j+1])
		    {
            // swap array[j] and array[j+1]
            temp = array[j];
            array[j] = array[j+1];
            array[j+1] = temp;
           }
        }
    }

	printf("Sorted array: \n");
	for(i=0;i<N;i++)
	{
	
		printf("%3d",array[i]);
		
	}
	return 0;
}