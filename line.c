#include <stdio.h>
#include <math.h>
int main()
{
int i,j,n,k;
scanf("%d",&n);
int A[n+4][n+4];

for (j=0;j<n+4;j++)
{
for (i=0;i<n+4;i++)
{
A[i][j]=0;
}
}

//начало алгоритма
	for (i=1;i<n+3;i++)
    {
        A[i][i]=1;
    }
//конец алгоритма  
    FILE*out;
    out=fopen ("output.txt","w");
for (j=0;j<n+4;j++)
{
for (i=0;i<n+4;i++)
{
fprintf(out,"%d ",A[i][j]);
printf("%d ",A[i][j]);
}
fprintf(out,"\n");
printf("\n");
}
fclose(out);
printf("Write something to exit");
scanf("%d",&n);
}
