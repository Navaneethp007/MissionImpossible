#include <bits/stdc++.h>
using namespace std;

void func(string s){
  int mxf=0;
  int freq[26];
  char c='A';
  memset(freq,0,sizeof(freq));
  for(int i=0; i<s.length(); i++)
  {
    freq[s[i]-'A']++;
    if(freq[s[i]-'A']>mxf)
    {
      mxf=freq[s[i]-'A'];
      c=s[i];
    }
  }
  cout<<mxf%10;
}
int main()
{
  func("OILWELQPWEPWQQP");
  return 0;
}
