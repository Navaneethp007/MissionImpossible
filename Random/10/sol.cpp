#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    long long int n,p=-1;
    vector<long long int>a;
    while(cin>>n)
        a.push_back(n);
    for(long long int i=1;i<a.size()-1;i++)
    {
        
        if(a[i]>a[i+1] && a[i]>a[i-1])
                p=i;
    }
    cout<<p;
    return 0;
}
