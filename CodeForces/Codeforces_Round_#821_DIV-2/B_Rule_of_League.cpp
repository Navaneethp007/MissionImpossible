#include<bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
using namespace std;
#define ll long long
#define fl(x,y,n) for(ll x=y;x<n;x++)
#define rfl(x,y,n) for(ll x=y;x>=n;x--)
#define yesno  if(result) cout<<"YES"<<endl;else cout<<"NO"<<endl;
#define pb push_back
#define all(v) v.begin(),v.end()
#define rev(v) v.rbegin(),v.rend()

void sol(){
    ll n,x,y;
    cin>>n>>x>>y;
    if((x!=0&&y!=0)||(x==0&&y==0)){
        cout<<"-1"<<endl;
        return;
    }
    if(x==0){
        if(y>(n-1)||(n-1)%y!=0)
            cout<<"-1"<<endl;
        else{
            fl(i,0,y)
                cout<<"1 ";
            ll ad=1+y+1;
            for(ll i=y;i<n-1;i++){
                cout<<ad<<" ";
                if(i%y==y-1)
                    ad+=y;
            }
            cout<<endl;
        }
    }
    else{
        if(x>(n-1)||(n-1)%x!=0)
            cout<<"-1"<<endl;
        else{
            fl(i,0,x)
                cout<<"1 ";
            ll ad=1+x+1;
            for(ll i=x;i<n-1;i++){
                cout<<ad<<" ";
                if(i%x==x-1)
                    ad+=x;
            }
            cout<<endl;
        }
    }
}

int main(){
    IOS;
    #ifndef ONLINE_JUDGE
        freopen("input.txt","r",stdin);
        freopen("output.txt","w",stdout);
    #endif
    int t;
    cin>>t;
    while(t--)
        sol();
    return 0;
}