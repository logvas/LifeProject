#include <stdio.h>
#include <math.h>
int main()
{
int i,n,j,high,k,kvo,t,x,y; //kvo-êîëè÷ñåòâî ôèãóð
scanf("%d",&high);
high=high+2;
x=0;
y=0;
n=high*2+1;
t=1;
int A[n+x][high+2];
for (j=0;j<high+2;j++)
{
for (i=0;i<n;i++)
{
A[i][j]=0;
}
}

kvo=(high+1)/3+1;
if (high%3!=0)
{x=x+1;}
for (j=0;j<kvo;j++)
{
    for (i=2;i<high-j*3;i++) //ïåðåäåëàòü ïîä x1 x2
    {
    A[i+j*3+1][high+2-i]=1;
    A[high+i-2][i+1+j*3]=1; //ñäåëàòü ñèììåòðèþ
    }
}
//for (j=1;j<kvo;j++)
//{A[high][j*3-2+x]=1; }


 FILE*out;
    out=fopen ("output.txt","w");
for (j=2;j<high;j++)
{
for (i=2;i<n-2;i++)
{
fprintf(out,"%d ",A[i][j]);
printf("%d ",A[i][j]);
}
fprintf(out,"\n");
printf("\n");
}
for (j=0;j<high-1;j++)
{
for (i=2;i<n-2;i++)
{
fprintf(out,"%d ",A[n-i-1][high-j]);
printf("%d ",A[n-i-1][high-j]);
}
fprintf(out,"\n");
printf("\n");
}
fclose(out);
printf("Write something to exit");
scanf("%d",&n);
}
