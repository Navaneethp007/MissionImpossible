#include <stdio.h>
#include <math.h>

void main() {
  char t[100];
  int v=0,s=0,c=0;
  printf("enter the text \n");
  gets(t);
  for(int i=0;t[i]!='$';i++)
  {
    if(t[i]=='A' || t[i]=='E' || t[i]=='I' || t[i]=='O' || t[i]=='U' || t[i]=='a' || t[i]=='e' || t[i]=='i' || t[i]=='o' || t[i]=='u' )
    {
      v++;
    }
    else if(t[i]==' ')
    {
      s++;
    }
    else
    {
      c++;
    }
  }
  printf("the number of vowels are %i \n",v);
  printf("the number of spaces are %i \n",s);
  printf("the number of consonants are %i \n",c);
}
  
