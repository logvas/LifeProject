//лишнее
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
int A[2*k+1+t][2*k+1+t],B[2*k+1+t][2];
for (i=0;i<2*k+1+t;i++)
{
B[i][0]=0;
B[i][1]=0;
}
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
//нач
for (j=1;j<2*k+1+t;j++)
{
for (i=1;i<2*k+1+t;i++)
    {if(A[i][j]==1)
    {B[j][0]=1;
    B[i][1]=1;}
    }
}
/*for (i=1;i<2*k+1+t;i++)   удаление строки&стол i (A[i][1->n]=A[i+1][1->n]; A[1->n][i]=A[1->n][i+1];
{
    if (B[i][0]==0)
    {"free" A[i][];}
    if (B[i][1]==0)
    {"free" A[0][i];}
    }
}
кон */
for (i=0;i<2*k+1+t;i++)
{
printf("%d ",B[i][0]);
}
printf("\n");
for (i=0;i<2*k+1+t;i++)
{printf("%d ",B[i][1]);}
}
