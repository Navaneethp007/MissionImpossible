#include<iostream>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        long long int n, max = 0;
        cin>>n;
        while(n--){
            long long int s, p, v, val;
            cin>>s>>p>>v;
            val = p/(s+1) * v;
            if(val > max)
                max = val;
        }
        cout<<max<<"\n";
    }
    return 0;
}