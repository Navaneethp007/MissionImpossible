#include <iostream>
using namespace std;

int main() {
    
    int t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        int n,k,c=0,f=0,s=0;
        cin>>n>>k;
        int *p=new int[n];
        for(int j=0;j<n;j++)
            cin>>p[j];
        for(int j=0;j<n;j++)
            {   
                if(p[j]>k)
                    {f=1;break;}
                else
                {
                    s+=p[j];
                    if(s>k)
                    {   
                        c++;
                        s=p[j];
                    }
                }
            }
        if(f==0)
            cout<<c+1<<"\n";
        else
            cout<<"-1\n";
    }
            



	return 0;
}

