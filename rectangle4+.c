#include <stdio.h>
#include <math.h>
int main()
{
int i,j,n,k,m,t;
scanf("%d%d",&n,&m);
t=2; //t должно отвечать за сдвиг на 1 по x y 
n=n+5;
m=m+5;
int A[n-1+t][m-1+t];

for (j=0;j<m+t-1;j++)
{
for (i=0;i<n+t-1;i++)
{
A[i][j]=0;
}
}
//начало алгоритма
for (j=2+t;j<m-1-t;j++)
{
for (i=2+t;i<n-1-t;i++)
{
A[i][j]=1;
}
}
//углы
A[t][t]=1;
A[t+1][t+1]=1;

A[t][m-t]=1;
A[t+1][m-t-1]=1;

A[n-t][t]=1;
A[n-t-1][t+1]=1;

A[n-t][m-t]=1;
A[n-t-1][m-t-1]=1;
//конец алгоритма
for (j=1;j<m+t-2;j++)
{
for (i=1;i<n+t-2;i++)
{
printf("%d ",A[i][j]);
}
printf("\n");
}
}
