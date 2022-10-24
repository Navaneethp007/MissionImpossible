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
    ll n;
    cin>>n;
    ll a[n];
    fl(i,0,n)
        cin>>a[i];
    if(n==1){
        cout<<"0"<<endl;
        return;
    }
    vector<pair<ll,ll>> v;
    if((a[0]%2)==(a[n-1]%2)){
        fl(i,0,n-1){
            if(a[i]%2==a[n-1]%2)
                v.pb({i+1,n});
        }
        fl(i,1,n){
            if(a[i]%2!=a[0]%2)
                v.pb({1,i+1});
        }
    }
    else{
        ll check=0;
        rfl(i,n-1,0){
            if(a[i]%2==a[0]%2){
                check=i;
                break;
            }
        }
        if(check){
            fl(i,check+1,n)
                v.pb({check+1,i+1});
            v.pb({1,check+1});
            fl(i,1,check){
                if(a[i]%2==a[0]%2)
                    v.pb({i+1,check+1});
                else
                    v.pb({1,i+1});
            }
        }
        else{
            fl(i,1,n){
                v.pb({1,i+1});
            }
        }
    }
    cout<<v.size()<<endl;
    fl(i,0,v.size())
        cout<<v[i].first<<" "<<v[i].second<<endl;
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