#include <stdio.h>
#include <math.h>
#include <stdlib.h>

void read(int a[][100],int m,int n)
{
  int i,j;
  for(int i=0; i<m; i++)
  {
    for(int j=0; j<n; j++)
    {
      scanf("%3i",&a[i][j]);
    }
  }
}

void disp(int a[][100],int m,int n)
{
  int i,j;
  for(int i=0; i<m; i++)
  {
    for(int j=0; j<n; j++)
    {
      printf("%5d",a[i][j]);
    }
    printf("\n");
  }
}

void add(int a[][100],int b[][100],int m,int n)
 {
    int i,j,c[200][200];
    for(int i=0; i<m; i++)
  {
    for(int j=0; j<n; j++)
    {
      c[i][j]=a[i][j]+b[i][j];
    }
  }
  for(int i=0; i<m; i++)
  {
    for(int j=0; j<n; j++)
    {
      printf("%5d",c[i][j]);
    }
    printf("\n");
  }
}

  void mult(int a[][100],int b[][100],int m,int n,int q)
  {
    int i,j,k,c[200][200];
    for(int i=0; i<m; i++)
    {
      for(int j=0; j<n; j++)
      {
        c[i][j]=0;
        for(int k=0; k<q;k++)
        {
          c[i][j]+=a[i][k]*b[k][j];
        }
      }
    }
   for(int i=0; i<m; i++)
   {
    for(int j=0; j<n; j++)
    {
      printf("%5d",c[i][j]);
    }
    printf("\n");
   }
  }

  void trans(int a[][100],int m,int n)
  {
    int i,j,c[200][200];
    for(int i=0; i<m; i++)
    {
      for(int j=0; j<n; j++)
      {
        c[i][j]=a[j][i];
      }
    }
    for(int i=0; i<m; i++)
    {
      for(int j=0; j<n; j++)
      {
        printf("%5d",c[i][j]);
      }
      printf("\n");
    }
  }

void main() {
  int d,e,f,g,o;
  printf("enter the number of rows of matrix 1 \n");
  scanf("%i",&d);
  printf("enter the number of columns of matrix 1 \n");
  scanf("%i",&e);
  int h[d][e];
  printf("enter the number of rows of matrix 2 \n");
  scanf("%i",&f);
  printf("enter the number of columns of matrix 2 \n");
  scanf("%i",&g);
  int i[f][g];
  printf("enter the elements of matrix 1 \n");
  read(h,d,e);
  printf("matrix 1 is \n");
  disp(h,d,e);
  printf("enter elements of matrix 2 is \n");
  read(i,f,g);
  printf("matrix 2 is \n");
  disp(i,f,g);
  while(1)
  {
    printf("\n                  \n");
    printf("  1.add \n  2.mutiply \n  3.transpose \n  4.exit \n");
    printf("enter the option \n");
    scanf("%i",&o);
    switch(o)
    {
      case 1: if(d==f && e==g)
               {
                 add(h,i,f,g);
               }
               else
               {
                 printf("error\n");
               }
               break;
      case 2: if(e==f)
               {
                 mult(h,i,d,e,g);
               }
               else
               {
                 printf("error\n");
               }
               break;
      case 3: printf("transpose of matrix 1 \n");
              trans(h,d,e);
              printf("transpose of matrix 2 \n");
              trans(i,f,g);
              break;
      case 4: exit(0);        
    }
  } 
}
 
