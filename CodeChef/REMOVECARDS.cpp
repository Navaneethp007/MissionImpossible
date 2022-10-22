#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int b;
	    cin>>b;
	    int a[b];
	    for(int i=0;i<b;i++){
	        cin>>a[i];
	    }
	    sort(a,a+b);
	    
	    unordered_map<int,int>m;
	    for(int i=0;i<b;i++){
	       m[a[i]]++;
	    }
	    
	    int max = INT_MIN;
	    for(auto x:m){
	        if(x.second>max){
	            max = x.second;
	        }
	    }
	    
	    cout<<b-max<<endl;
	    
	    
	}
	return 0;
}
