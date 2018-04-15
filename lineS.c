#include <stdio.h>
#include <math.h>
int main()
{
int i,j,n,k;
char shape[20];
scanf("%s",&shape);
scanf("%d",&n);
int A[n+3][5]; //или A[n+3][n+3]

for (j=0;j<5;j++)
{
for (i=0;i<n+4;i++)
{
A[i][j]=0;
}
}

//начало алгоритма
	for (i=1;i<n+2;i=i+2)
    {
        A[i][1]=1;
    A[i+1][3]=1;
    }
if(n%2!=0)
{A[n+2][1]=1;}
//конец алгоритма
for (j=0;j<5;j++)
{
for (i=0;i<n+4;i++)
{
printf("%d ",A[i][j]);
}
printf("\n");
}
}
