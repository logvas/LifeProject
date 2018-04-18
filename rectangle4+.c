#include <stdio.h>
#include <math.h>
int main()
{
int i,j,n,k,m;
scanf("%d%d",&n,&m);
n=n+5;
m=m+5;
int A[n+1][m+1];

for (j=0;j<m+1;j++)
{
for (i=0;i<n+1;i++)
{
A[i][j]=0;
}
}
//начало алгоритма
for (j=4;j<m-3;j++)
{
for (i=4;i<n-3;i++)
{
A[i][j]=1;
}
}
//углы
A[2][2]=1;
A[3][3]=1;

A[2][m-2]=1;
A[3][m-3]=1;

A[n-2][2]=1;
A[n-3][3]=1;

A[n-2][m-2]=1;
A[n-3][m-3]=1;
//конец алгоритма
 FILE*out;
    out=fopen ("output.txt","w");
for (j=0;j<m-1;j++)
{
for (i=0;i<n-1;i++)
{
fprintf(out,"%d ",A[i+1][j+1]);
printf("%d ",A[i+1][j+1]);
}
fprintf(out,"\n");
printf("\n");
}
fclose(out);
printf("Write something to exit");
scanf("%d",&n);
}
