#include<iostream>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cout.tie(NULL);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        long long int n, a, b;
        bool flag = false;
        cin>>n>>a>>b;
        if(n<=3){
            if((a+b)%3==0)
                flag = true;
        }
        else{
            long long int c, times, sum=0;
            c = (a+b)%10;
            sum += (a+b+c)%3;
            n-=3;
            times = n/4;
            if((a+b+c)%10!=0)
                sum += (times*2)%3;
            n%=4;
            while(n--){
                c = (2*c)%10;
                sum += c%3;
            }
            sum%=3;
            if(sum==0)
                flag = true;
        }
        if(flag)
            cout<<"YES\n";
        else
            cout<<"NO\n";           
    }
    return 0;
}