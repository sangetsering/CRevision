//program to print the age of person correct to month and date

#include<stdio.h> 
int main()
{
    int py,pb,xm,xy,xd,mp,td,bd;
    
    printf("enter the details\n********************************\n");
    printf("enter the present year \n");
    scanf("%d",&py);
    printf("enter ur year of birth \n");
    scanf("%d",&pb);
    printf("enter number of  month passed this year \n");
    scanf("%d",&mp);
    printf("enter todays date only \n");
    scanf("%d",&td);
    printf("enter ur date of bith  \n");
    scanf("%d",&bd);
    xy=py-pb;
    xm=12-mp;
    xd=td-bd;
    
    printf("ur %d years %d months %d days old.",xy,xm,xd);
}