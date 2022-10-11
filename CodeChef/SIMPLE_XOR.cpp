#include "bits/stdc++.h"
using namespace std;
int main()
{
    int t,i;
    cin>>t;
    for(i=0;i<t;i++)
    {
        int p,q;
        cin>>p>>q;
        int s= 0;
        int count = 0;
        for(int j=p;j<=q;j++)
        {
            int w=j;
            int x=j+1;
            int y=j+2;
            int z=j+3;
            if((w^x^y^z) == 0 && z<=q)
            {
                s = 1;
                    cout<<w<<" "<<x<<" "<<y<<" "<<z<<endl;
                    break;
            }
            else
            {
                count = count+1;
                if(count>10)
                    break;
            }
            
        }
        if(s==0)
            {
                cout<<"-1"<<endl;
            }
    }
    return 0;
}