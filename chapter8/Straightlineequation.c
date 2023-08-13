//program to fit the equation of line through points

#include<stdio.h>

int main()
{
   float y[10],x[10],m=0,c=0;
   int N,i=0;
   float sumx=0,sumy=0,sumxy=0,sumx2=0,Y=0;
   
   printf("Enter the number of pair points: ");
   scanf("%d",&N);
   
   //reading the x, and y coordinates
   printf("\nEnter the points (x,y) one after another:\n "); 
   for(i=0;i<N;i++)
      scanf("%f%f",&x[i],&y[i]);
   
   //calculating the sums
   for(i=0;i<N;i++)
   {
   	  sumx = sumx + x[i];
   	  sumy = sumy + y[i];
   	  sumxy = sumxy + x[i]*y[i];
   	  sumx2 = sumx2 + x[i]*x[i];
   }
   
   //calculating m and c
   m = (N*sumxy -sumx*sumy)/(N*sumx2 - sumx*sumx);
   c = (sumy - m*sumx)/N;
    
   //calculating the best fit depending on x values
   for(i=0;i<N;i++)
   {
   	  Y = Y + (m*x[i] + c) ;
   }
   
   printf("\nThe best fit for straight y = %f",Y);
   return 0;
}