#include<iostream>
using namespace std;
int main() {
  int n;
  cin>>n;
  for(int i=0;i<n;i++)
  {
      int a=0,b=0;
      cin>>a>>b;
      if(a<=9&&b<=9)
      cout<<"1 1"<<endl;
      else
      {
          if((a/9)<(b/9) || a<b)
          {
              if(a%9==0)
              cout<<"0 "<<a/9<<endl;
              else
              cout<<"0 "<<(a/9)+1<<endl;
          }
          
          else
          {
              if(b%9==0)
              cout<<"1 "<<(b/9)<<endl;
              else
              cout<<"1 "<<(b/9)+1<<endl;
          }
          
      }
      
  }
}

