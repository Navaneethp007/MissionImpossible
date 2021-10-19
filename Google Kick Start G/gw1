#include <iostream>
#include <math.h>
#include <bits/stdc++.h>
using namespace std;

void cal(map<int, char>&mp)
{
  int k=26;
  for(int i=0; i<26; i++)
  {
    k=(k^i)%26;
    mp[i]=('A'+k);
  }
}

int main() {
    map<int, char> mp;
    for(int i=0; i<26; i++)
    {
      mp[i]='A'+i;
    }
    cal(mp);
    cout<<mp[2]<<"\n";
    return 0;
}
