#include<iostream>
#include<algorithm>
using namespace std;

int main(){
    int n;
    cin>>n;
    long long int budg[n], max=0, prof;
    for(int i=0;i<n;i++)
        cin>>budg[i];
    sort(budg, budg+n);
    for(int i=0;i<n;i++){
        prof = budg[i]*(n-i);
        if(prof>max)
            max=prof;
    }
    cout<<max<<endl;
    return 0;
}