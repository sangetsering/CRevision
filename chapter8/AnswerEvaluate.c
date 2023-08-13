//program to evaluate the answer of the given marks
#include<stdio.h>

int main()
{
    int N, Q;
    
    printf("Enter the number of students and number of questions: ");
    scanf("%d%d", &N, &Q);
    
    int correct[N];
    int key[Q];
    int response[N][Q];
    
    for (int i = 0; i < N; i++)  // Initialize the correct array to 0
        correct[i] = 0;

    printf("\nEnter the correct answers: ");
    for(int i = 0; i < Q; i++)
        scanf("%d", &key[i]);

    printf("\nEnter the answers obtained by:");
    for(int i = 0; i < N; i++)
    {
        printf("\nstudent %d: ", i + 1);
        for(int j = 0; j < Q; j++)
        {
            scanf("%d", &response[i][j]);
        }
    }

    for(int i = 0; i < N; i++)
    {
        for(int j = 0; j < Q; j++)
        {
            if(response[i][j] == key[j])
                correct[i]++;
        }
    }

    for(int i = 0; i < N; i++)
    {
        printf("\nCorrect answers attempted by student %d: %d", i + 1, correct[i]);
    }

    return 0;
}
