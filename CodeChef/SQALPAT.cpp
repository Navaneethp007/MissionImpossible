#include<iostream>
using namespace std;

int main() {
    int n,i=1;
    cin>>n;
    while(i<=n){
        for(int j=0;j<5;j++)
            if (i%2)
                cout<<(i-1)*5+j+1<<" ";
            else
                cout<<i*5-j<<" ";
        cout<<endl;
        i++;
    }
    return 0;
}