//program to create a vector(series of number ) and perform some operations

#include <stdio.h>
#include <stdlib.h>

// Define the structure for a vector
typedef struct
 {
    int *data;
    int size;
} Vector;

// Function to create a vector
Vector createVector(int size) 
{
    Vector v;
    v.size = size;
    v.data = (int*)malloc(size * sizeof(int));
    for(int i = 0; i < size; i++) 
	{
        printf("Enter value for element %d: ", i+1);
        scanf("%d", &v.data[i]);
    }
    return v;
}

// Function to modify the value of a given element
void modifyElement(Vector *v, int index, int newValue) 
{
    if(index >= 0 && index < v->size)
	{
        v->data[index] = newValue;
    } 
	else 
	{
        printf("Index out of bounds!\n");
    }
}

// Function to multiply vector by a scalar value
void multiplyByScalar(Vector *v, int scalar)
{
    for(int i = 0; i < v->size; i++)
	{
        v->data[i] *= scalar;
    }
}

// Function to display the vector
void displayVector(Vector v) 
{
    printf("(");
    for(int i = 0; i < v.size; i++) 
	{
        printf("%d", v.data[i]);
        if(i < v.size - 1) 
		{
            printf(", ");
        }
    }
    printf(")\n");
}

int main() 
{
    int size;
    printf("Enter the size of the vector: ");
    scanf("%d", &size);

    Vector v = createVector(size);
    
    int choice, index, value, scalar;
    while(1) 
	{
        printf("\n1. Modify element\n2. Multiply by scalar\n3. Display vector\n4. Exit\nEnter your choice: ");
        scanf("%d", &choice);

        switch(choice) 
		{
            case 1:
                printf("Enter index to modify: ");
                scanf("%d", &index);
                printf("Enter new value: ");
                scanf("%d", &value);
                modifyElement(&v, index, value);
                break;
            case 2:
                printf("Enter scalar value: ");
                scanf("%d", &scalar);
                multiplyByScalar(&v, scalar);
                break;
            case 3:
                displayVector(v);
                break;
            case 4:
                free(v.data);
                return 0;
            default:
                printf("Invalid choice!\n");
        }
    }

    return 0;
}
