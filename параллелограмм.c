#include <stdio.h>
#include <math.h>
int main()
{
int i,j,n,m,k,t;
scanf("%d%d",&n,&m);
k=m;
t=k-2;
if (n>m)
    k=n;
int A[2*k+1+t][2*k+1+t];
for (j=0;j<2*k+1+t;j++)
{
for (i=0;i<2*k+1+t;i++)
{
A[i][j]=0;
}
}
//начало алгоритма
for (j=0;j<m;j++)
{
for (i=n;i<2*n;i++)
    {
        A[i-k+j+1+t][i-j+t]=1;
    }
}
//конец алгоритма
 FILE*out;
    out=fopen ("output.txt","w");
for (j=0;j<2*k+1+t;j++)
{
for (i=0;i<2*k+1+t;i++)
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

