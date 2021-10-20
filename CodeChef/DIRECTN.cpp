#include <iostream>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--)
    {
        int n,f=0;
        cin>>n;
        string s;
        cin>>s;
        for(int i=0; i<n; i++)
        {
            if(s[i]==s[i+1])
            {  
              f=1;
              break;
            }
        }
        if(f==1)
        cout<<"YES"<<"\n";
        else
        cout<<"NO"<<"\n";
    }
	return 0;
}
