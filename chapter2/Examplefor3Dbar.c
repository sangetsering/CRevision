/* Program to create a 3d bar-chart in C */

#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<graphics.h>

int main()
{
/* Variable declarations */

int gdriver, gmode,i,j;
int xs,xe, ys, ye, x, y;

/* Variable initialization */
gdriver = DETECT;

/* Graph initialization */
initgraph(&gdriver, &gmode, "d:\\turboc3\\bgi");

/* set the fill style */

setfillstyle(SOLID_FILL,LIGHTRED);

/* Draw the 3d bar chart */
x = 180;
y = 25;
outtextxy(x , y , "75000");
outtextxy(x + 50 , y + 50, "55000");
outtextxy(x + 100 , y + 100 , "45000");
outtextxy(x + 170, y + 170 , "30000");
outtextxy(x + 230, y + 230 , "20000");
j = 55;
xs = 100;xe = 150, ys = 10, ye = 320;
for(i = 0; i<5;i++)
{

xs = xs + j;
ys = ys + j;
xe = xe + j;

bar3d(xs, ys, xe, ye, (xe - xs)/4, 1);
}
getch();

/* close the graph */

closegraph();
return 0;
}