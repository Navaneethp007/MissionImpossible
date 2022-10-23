#include <iostream>
using namespace std;

int main(){
    int a, b;
    cin>>a>>b;
    if(a%2==0){
        a++;
    }
    for(int i=a; i<=b; i+=2)
        cout<<i<<" ";
    cout<<endl;
    return 0;
}