#include <stdio.h>
#include <math.h>
int main()
{
int i,j,n,k;
scanf("%d",&n);
int A[n+2][n+2];

for (j=0;j<n+2;j++)
{
for (i=0;i<n+2;i++)
{
A[i][j]=0;
}
}
//начало алгоритма
for (j=0;j<n+2;j++)
{
	for (i=0;i<n+2;i++)
    {
        if (3*i+j<n+2)
        {
	A[3*i+j][j]=1;
	A[j][3*i+j]=1;
        }
}
}
//конец алгоритма
 FILE*out;
    out=fopen ("output.txt","w");
for (j=0;j<n+2;j++)
{
for (i=0;i<n+2;i++)
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
