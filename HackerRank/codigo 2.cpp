// Jimmy is very hungry . So he decided to go to a hotel and eat something. Jimmy has 'm' money in his pocket. There are 'n' food items in the hotel. 
// Each food item contains different calories and has different cost. Jimmy needs to select his food items in such a way that he gains the maximum calorie. 
// Find the maximum calorie that he can gain with the money in his pocket.

// Input Format
// First line contains no of test cases 't'
// First line of each test case contains money in his pocket 'm'
// Second line of each test case contains the no of food items 'n'
// Next 'n' lines of each test case contains each food item's name, its cost 'r' and calorie 'c' it contains

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int t;
    cin>>t;
  while(t--)
  {
    int m,n,d=0,a=0,e=0,b=0;
    cin>>m>>n;
    int c[n],r[n];
    string s;
    for(int i=0; i<n; i++)
    {
      cin>>s;
      cin>>r[i]>>c[i];
      if(r[i]<m)
      {
        a=a+r[i];
        if(a<=m)
          d=d+c[i];
      }
      else if(r[i]==m)
      {
        e=e+r[i];
        if(e==m)
          b=b+c[i];
      }
    }
    if(d<b)
      cout<<b<<"\n";
    else
      cout<<d<<"\n";
  }
    return 0;
}
