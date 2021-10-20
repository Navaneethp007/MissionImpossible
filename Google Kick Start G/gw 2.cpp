#include <iostream>
#include <math.h>
#include <bits/stdc++.h>
using namespace std;

void func(string s){
  map<char, int> mp;
  mp['I']=1;
  mp['V']=5;
  mp['X']=10;
  mp['L']=50;
  int num=0;
  for(int i=0; i<s.size(); i++){
    if(i+1< s.size() && mp[s[i+1]]> mp[s[i]]){
      num=num+mp[s[i+1]]- mp[s[i]];
      i++;
    }
    else 
      num=num+mp[s[i]];  
  }
  cout<<char(num%26+'A')<<num%10<<"\n";
}

int main(){
  func("XL");
  return 0;
}
