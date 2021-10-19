#include <stdio.h>
#include <stdlib.h>
int main()
{
FILE *f;
char fn[50];
int c;
int li=0,ch=0,wo=0;
printf("Enter the file name: \n");
scanf("%[^\n]",fn);
f=fopen(fn,"r");
if(f==NULL)
  {
  printf("Error!");
  exit(1);
   }
c=getc(f);
while(c!=EOF)
{
if (c=='\n') 
{
  li++;
}
if(c==' '||c=='\n') 
{
  wo++;
}
ch++;
c=getc(f);
}
fclose(f);
printf("Number of lines=%d\n\nNumber of words=%d\n\nNumber of characters = %d,\n",li,wo+li,ch);
printf("results are written into out.txt file..\n");
f=fopen("out.txt","w");
fprintf(f,"Number of lines=%d\n\nNumber of words=%d\n\nNumber of characters = %d\n\n",li,wo+li,ch);
fclose(f);
}
