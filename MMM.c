//выбор??
//gbhfvblf - for (i=0;i<high+1;i++) {a[i*2+1][i]}
#include <stdio.h>
#include <math.h>
int main()
{
int i,n,j,high,k,kvo,t,x,y; //kvo-количсетво фигур
scanf("%d",&high);
high=high+2;
x=0;
y=0;
n=high*2+1;
t=1;
int A[n+x][high+2];
for (j=0;j<high+2;j++)
{
for (i=0;i<n;i++)
{
A[i][j]=0;
}
}

kvo=(high+1)/3+1;
if (high%3!=0)
{x=x+1;}
for (j=0;j<kvo;j++)
{
    for (i=2;i<high-j*3;i++) //переделать под x1 x2
    {
    A[i+j*3][high+2-i]=1;
    A[high+i-1][i+1+j*3]=1; //сделать симметрию
    }
}
for (j=1;j<kvo;j++)
{A[high][j*3-2+x]=1; }


for (j=0;j<high+2;j++)
{
for (i=0;i<n;i++)
{
printf("%d ",A[i][j]);
}
printf("\n");
}
}
