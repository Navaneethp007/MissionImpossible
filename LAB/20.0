#include<stdio.h>
#include<stdlib.h>
int main()
{
    FILE *f;
    char a[80];
    char c;
f=fopen("in.txt","w");
if(f==NULL)
  {
  printf("Error!");
  exit(1);
   }
printf("Enter strings and type end to stop\n");
do{
   fgets(a,80,stdin);
   if(strcmp(a,"end\n")==0 ) break;
   fputs(a,f);
  }
  while(1);
 fclose(f);
    f=fopen("in.txt","r");
    if(f==NULL)
    {
        printf("Error !");
        exit(0);
    }
    printf("\n Contents read: \n");
    while(!feof(f))
    printf("%c",getc(f));
    fclose(f);
printf("\nContents of file before appending: \n");
f=fopen("in.txt","r");
if(f==NULL)
{
printf("Error!");
exit(0);
}
while(!feof(f))
{
c=fgetc(f);
printf("%c",c);
}
fclose(f);
f=fopen("in.txt","a");
if(f==NULL)
{
printf("File cannot be appended");
exit(0);
}
printf("\n Enter string to append and add . at the end \n");
while(c!='.')
{
c=getchar();
fputc(c,f);
}
fclose(f);
printf("\n Contents of file after appending: \n");
f=fopen("in.txt","r");
if(f==NULL)
{
printf("File cannot be opened");
exit(0);

}
while(!feof(f))
printf("%c",getc(f));
fclose(f);
return 0;
}
