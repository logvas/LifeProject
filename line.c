#include <stdio.h>
#include <math.h>

void draw_line_field(int len, int A[len+4][len+4])
{
for (int j=0;j<len+4;j++)
{
for (int i=0;i<len+4;i++)
{A[i][j]=0;}
}
}

void draw_line(int len, int A[len+4][len+4])
{
    for (int i=1;i<len+3;i++)
    {A[i][i]=1;}
}

void file_console_output(int len, int A[len+4][len+4])
{
FILE*out;
out=fopen ("output.txt","w");
for (int j=0;j<len+4;j++)
{
for (int i=0;i<len+4;i++)
{
fprintf(out,"%d ",A[i][j]);
printf("%d ",A[i][j]);
}
fprintf(out,"\n");
printf("\n");
}
fclose(out);
}

int main()
{
int len;
scanf("%d",&len);
int A[len+4][len+4];
draw_line_field(len,A);
draw_line(len,A);
file_console_output(len,A);

//printf("Write something to exit");
//scanf("%d",&len);
}
