//program to find the numbr of vote share among candidates
#include<stdio.h>
#define N 5
int main()
{
	int count = 0,vote;	
	int Ballot[N]={0};
	
	printf("\nEnter the vote to any  1-5 as each number belong to each candidate:");
	
	do
	{
		scanf("%d",&vote);
		switch(vote)
		{
			case 1: Ballot[vote]++;
			        break;
			case 2: Ballot[vote]++;
			        break;
			case 3: Ballot[vote]++;
			        break;
			case 4: Ballot[vote]++;
			        break;
			case 5: Ballot[vote]++;
			        break;
			default: count++;
			        break;
			
		}
	}while(vote>=1);
	
	printf("\nVote share acquire by each candidate: ");
	
	for(int i=1;i<=5;i++)
	{
		printf("\nCandidate %d: Vote -- %d",i,Ballot[i]);
	}
	printf("\n Number of spoilt Ballot --%d",count);
	return 0;
}