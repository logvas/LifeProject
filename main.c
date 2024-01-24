#include <stdio.h>
#include <math.h>

void draw_line_field(int len, int Field[len+4][len+4])
{
for (int j=0;j<len+4;j++)
{
for (int i=0;i<len+4;i++)
{Field[i][j]=0;}
}
}

void draw_straight_line(int len, int Field[len+4][len+4])
{
for (int i=1;i<len+2;i=i+2)
{
    Field[i][1]=1;
    Field[i+1][3]=1;
    }
if(len%2!=0)
{Field[len+2][1]=1;}
}


void draw_line(int len, int Field[len+4][len+4])
{
    for (int i=1;i<len+3;i++)
    {Field[i][i]=1;}
}

void draw_rectangle(int width, int height, int Field[width][height])
{
for (int j=4;j<width-3;j++)
{
for (int i=4;i<height-3;i++)
{
Field[i][j]=1;
}
}
//углы
Field[2][2]=1;
Field[3][3]=1;
Field[2][width-2]=1;
Field[3][width-3]=1;
Field[height-2][2]=1;
Field[height-3][3]=1;
Field[height-2][width-2]=1;
Field[height-3][width-3]=1;
}



void file_console_output(int len, int Field[len+4][len+4])
{
FILE*out;
out=fopen ("output.txt","w");
for (int j=0;j<len+4;j++)
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
int len;
scanf("%d",&len);
int Field[len+4][len+4];
draw_line_field(len,Field);
draw_rectangle(len,len,Field);
file_console_output(len,Field);



//printf("Write something to exit");
//scanf("%d",&len);
}
