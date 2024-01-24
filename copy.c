#include <stdio.h>
#include <math.h>


void file_console_output(int len, int height, int Field[len+6][height+6])
{
FILE*out;
out=fopen ("output.txt","w");
for (int j=0;j<height+4;j++)
{
for (int i=0;i<len+4;i++)
{
fprintf(out,"%d ",Field[i][j]);
printf("%d ",Field[i][j]);
}
fprintf(out,"\n");
printf("\n");
}
fclose(out);
}

int main()
{
int i,j,n,k,m;
scanf("%d%d",&n,&m);
int Field[n+6][m+6];

for (j=0;j<m+6;j++)
{
for (i=0;i<n+6;i++)
{
Field[i][j]=0;
}
}
//начало алгоритма
for (j=3;j<m+1;j++)
{
for (i=3;i<n+1;i++)
{
Field[i][j]=1;
}
}
//углы
Field[1][1]=1;
Field[2][2]=1;

Field[1][m+2]=1;
Field[2][m+1]=1;

Field[n+2][1]=1;
Field[n+1][2]=1;

Field[n+2][m+2]=1;
Field[n+1][m+1]=1;
//конец алгоритма

file_console_output(n, m, Field);
}
