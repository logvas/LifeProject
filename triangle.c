#include <stdio.h>
#include <math.h>
int main()
{
int i,n,j,high,k,kvo,t,x,y; //kvo-количсетво фигур
scanf("%d",&high);
high=high+4;
x=0;
y=0;
t=1;
int A[high][high];
for (j=0;j<high;j++)
{
for (i=0;i<high;i++)
{
A[i][j]=0;
}
}

kvo=(high+1)/3+1;
for (j=0;j<kvo;j++)
{
    for (i=2;i<high-j*3;i++) //переделать под x1 x2
    {
    A[i+j*3-1][high+2-i-2]=1;
    }
}

for (j=0;j<high;j++)
{
for (i=0;i<high;i++)
{
printf("%d ",A[i][j]);
}
printf("\n");
}
}
