#include <stdio.h>
#include <math.h>
int main()
{
int i,j,n,k;
char shape[20];
scanf("%s",&shape);
scanf("%d",&n);
int A[n+3][n+3];

for (j=0;j<n+3;j++)
{
for (i=0;i<n+3;i++)
{
A[i][j]=0;
}
}

//начало алгоритма
	for (i=1;i<n+2;i++)
    {
        A[i][i]=1;
    }
//конец алгоритма
for (j=0;j<n+3;j++) //наклон ? при выводе
{
for (i=0;i<n+3;i++)
{
printf("%d ",A[i][j]);
}
printf("\n");
}
}
