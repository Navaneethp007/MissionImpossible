#include<iostream>
#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    int n,c=0;
    cin>>n;
    int a=INT_MIN;
    for(int i=0;i<n;i++)
    {
        int p=0,s=0;
        cin>>p>>s;
        int *ptr=new int[p];
      //  int *pt=new int[p];
        for(int j=0;j<p;j++)
        {
            cin>>ptr[j];
        }
        for(int j=0;j<p;j++)
        {
            if(s%ptr[j]==0)
            {
                if(a<ptr[j])
                a=ptr[j];
            }
            else
            c++;
        }
        if(c==p)
        {
            cout<<"-1"<<endl;
            
        }
        else
        {
            cout<<a<<endl;
            
        }
        c=0;
        a=INT_MIN;
    }
    return 0;
}
