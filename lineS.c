#include <stdio.h>
#include <math.h>
int main()
{
int i,j,n,k;
scanf("%d",&n);
int A[n+3][n+3]; //или A[n+3][n+3]

for (j=0;j<n+4;j++)
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

