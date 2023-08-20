//program to write modular that can perform sorting,merging ang diplay

#include <stdio.h>

void readArray(int arr[], int size) 
{
    for(int i = 0; i < size; i++) 
	{
        printf("Enter element %d: ", i+1);
        scanf("%d", &arr[i]);
    }
}

void sort(int arr[], int size) 
{
    for(int i = 0; i < size - 1; i++) 
	{
        for(int j = i + 1; j < size; j++) 
		{
            if(arr[i] > arr[j]) 
			{
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
}

void merge(int arr1[], int size1, int arr2[], int size2, int merged[]) 
{
    int i = 0, j = 0, k = 0;
    while(i < size1 && j < size2) 
	{
        if(arr1[i] < arr2[j]) 
		{
            merged[k++] = arr1[i++];
        }
		 else 
		 {
            merged[k++] = arr2[j++];
         }
    }
    while(i < size1) 
	{
        merged[k++] = arr1[i++];
    }
    while(j < size2) 
	{
        merged[k++] = arr2[j++];
    }
}

void display(int arr[], int size) 
{
    for(int i = 0; i < size; i++) 
	{
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() 
{
    int size1, size2;
    
    printf("Enter size of first array: ");
    scanf("%d", &size1);
    int arr1[size1];
    readArray(arr1, size1);
    
    printf("Enter size of second array: ");
    scanf("%d", &size2);
    int arr2[size2];
    readArray(arr2, size2);
    
    sort(arr1, size1);
    sort(arr2, size2);
    
    int merged[size1 + size2];
    merge(arr1, size1, arr2, size2, merged);

    printf("Merged and Sorted Array: ");
    display(merged, size1 + size2);

    return 0;
}
