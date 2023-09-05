#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <string>
using namespace std;


int main() {
    int m,n;
    cin>>m>>n;
    cin.ignore();
    string s,a,b="";
    getline(cin,s);
    cin>>a;
    b+=s[0];
    for(int i=0;i<m;i++)
    {
        if(s[i]==' '){
            b+=s[i+1];
        }
    }
    if(a==b)
        cout<<"true";
    else
        cout<<"false";
    return 0;
}
