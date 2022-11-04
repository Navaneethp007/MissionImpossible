#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct qwe
{
 char a[100];
}arr[100];

struct poi
{
 int ind;
 int len;
}leng[100];

int main()
{
 FILE *fin,*fout,*fsym,*fopt,*flen,*flis;
 fin=fopen("Input.txt","r");
 fopt=fopen("optab.txt","r");
 fsym=fopen("symtab.txt","r");
 flen=fopen("length.txt","r");
 fout=fopen("output.txt","w");
 flis=fopen("list.txt","w");
 
 leng[0].len=0;
 leng[0].ind=0;
 char lab[100],op[100],oper[100],mne[100],value[100],lc[100],symadd[100],sym[100],l[100];
 int start,len,c=0,co=0,co_len=1,i=0,j,d;
 fscanf(fin,"%s\t%s\t%s\t%s",lc,lab,op,oper);
 fprintf(flis,"%s\t%s\t%s\t%s\n",lc,lab,op,oper);
 if(strcmp(op,"START")==0)
 {
  start=strtol(oper,NULL,16);
  fscanf(flen,"%s",l);
 }
 len=strtol(l,NULL,10);
 fprintf(fout,"H^%s^%06x^%06x\n",lab,start,len);
 fscanf(fin,"%s\t%s\t%s\t%s",lc,lab,op,oper);
 while(strcmp(op,"END")!=0)
 {
  while(!(feof(fopt)))
  {
   fscanf(fopt,"%s\t%s",mne,value);
   if(strcmp(mne,op)==0)
   {
    while(!(feof(fsym)))
    {
     fscanf(fsym,"%s\t%s",sym,symadd);
     if(strcmp(symadd,oper)==0)
     {
      strcpy(arr[c].a,value);
      strcat(arr[c++].a,sym);
      co+=strlen(value);
      co+=strlen(sym);
      if(co>=60)
      {
       leng[co_len].ind=c-1;
       leng[co_len++].len=co-strlen(value)-strlen(sym);
       co=strlen(value)+strlen(sym);
      }
      fprintf(flis,"%s\t%s\t%s\t%s\t%s%s\n",lc,lab,op,oper,value,sym);
      break;
     }
    }
    fseek(fsym,SEEK_SET,0);
    break;
   }
  }
  fseek(fopt,SEEK_SET,0);
  if(strcmp(op,"WORD")==0 || strcmp(op,"BYTE")==0)
  {
   if(strcmp(op,"WORD")==0)
   {
    char ab[100];
    strcpy(ab,"00000");
    strcpy(arr[c++].a,strcat(ab,oper));
    co+=6;
    if(co>=60)
    {
     leng[co_len].ind=c-1;
     leng[co_len++].len=co-6;
     co=6;
    }
    d=strtol(oper,NULL,16);
    fprintf(flis,"%s\t%s\t%s\t%s\t%02x%04x\n",lc,lab,op,oper,0,d);
   }
    if(strcmp(op,"BYTE")==0)
    {
     int b[100],as=0,index=0;
     char str[100];
     for(i=2;i<strlen(oper)-1;i++)
      b[as++]=(int)oper[i];
     for(i=0;i<as;i++)
      index+=sprintf(&str[index],"%x",b[i]);
     strcpy(arr[c++].a,str);
     co+=strlen(str);
     if(co>=60)
     {
      leng[co_len].ind=c-1;
      leng[co_len++].len=co-strlen(str);
      co=strlen(str);
     }
    }
   }
   fscanf(fin,"%s\t%s\t%s\t%s",lc,lab,op,oper);
   if(strcmp(op,"RESB")==0 || strcmp(op,"RESW")==0)
   {
     fprintf(flis,"%s\t%s\t%s\t%s\t%06x\n",lc,lab,op,oper,0);
   }
   
  }
  if(co<60)
  {
   leng[co_len].ind=c;
   leng[co_len++].len=co;
  }
  for(i=0;i<co_len-1;i++)
  {
   start+=leng[i].len/2;
   fprintf(fout,"T^%06x^%02x^",start,leng[i+1].len/2);
   for(j=leng[i].ind;j<leng[i+1].ind;j++)
    fprintf(fout,"%s^",arr[j].a);
   fprintf(fout,"\n");
  }
  fprintf(fout,"E^%06x",start);
  fclose(fin);
  fclose(fout);
  fclose(fsym);
  fclose(flen);
  fclose(fopt);
  fclose(flis);
  return 0;
 }
