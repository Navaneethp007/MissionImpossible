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
    string a,b;
    cin>>a>>b;
    vector<ll>change;
    fl(i,0,n){
        if(a[i]!=b[i])
            change.pb(i);
    }
    if(change.size()%2){
        cout<<"-1"<<endl;
        return;
    }
    ll c_max=0;
    ll add=1;
    fl(i,1,change.size()){
        if(change[i]-change[i-1]==1)
            add++;
        else{
            c_max=max(c_max,add);
            add=1;
        }
    }
    c_max=max(c_max,add);
    if(c_max==2&&c_max==change.size()){
        cout<<min(x,2*y)<<endl;
    }
    else
        cout<<y*(change.size()/2)<<endl;
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