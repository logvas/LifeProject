#include <stdio.h>
#include <math.h>
int main()
{
int i,j,n,k,m;
scanf("%d%d",&n,&m);
int A[n][m];//при массиве, содержащем не только фигуру, необходимо добавить шаг с обнулением массива

for (i=0;i<n;i++)
{
for (j=0;j<m;j++)
{
A[i][j]=1;
}
}
//углы
for (i=2;i<n-2;i++)
{
A[i][m-1]=0;
A[i][0]=0;
}
for (i=2;i<m-2;i++)
{
A[n-1][i]=0;
A[0][i]=0;
}

A[1][1]=0;
A[1][m-2]=0;
A[n-2][1]=0;
A[n-2][m-2]=0;

for (i=0;i<n;i++)
{
for (j=0;j<m;j++)
{
printf("%d ",A[i][j]);
}
printf("\n");
}
}
