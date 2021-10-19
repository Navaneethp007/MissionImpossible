#include <iostream>
#include <math.h>
#include <bits/stdc++.h>
using namespace std;

int main(){
  int h,d,t=0,c=0,f,e;
  cin>>h>>d;
  c=96-h;
  t=60-d;
  int a[t];
  for(int i=0; i<t; i++)
  cin>>a[i];
  cin>>f;
  int b[f];
  for(int i=0; i<f; i++)
  cin>>b[i];
  cin>>e;
  int g[e];
  for(int i=0; i<e; i++)
  cin>>g[i];
  int s=0,x=0,p=0;
  for(int i=0; i<t; i++)
  p=p+a[i];
  for(int i=0; i<e; i++)
  x=x+g[i];
  for(int i=0; i<f; i++)
  s=s+b[i];
  float y=((p*100)/(c*2*t));
  if(s>x)
  cout<<(s-x);
  else 
  cout<<((x-s)*(100-y))/100<<"\n";
  return 0;
}
