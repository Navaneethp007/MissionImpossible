#include<iostream>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cout.tie(NULL);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        long long int n, min, speed, nomax = 1;
        cin>>n;
        cin>>speed;
        min = speed;
        for(int i=0;i<n-1;i++){
            cin>>speed;
            if(speed<=min){
                min = speed;
                nomax++;
            }
        }
        cout<<nomax<<"\n";
    }

    return 0;
}