#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        int n,c=0,d;
        cin>>n;
        int *p=new int[n];
        for(int j=0;j<n;j++)
        {
            cin>>p[j];
        }
        if(n==1)
        cout<<c<<endl;
        else
        {
            for(int a=0;a<n-1;a++)
            {
                for(int b=a+1;b<n;b++)
                {
                  // if(p[a]&p[b]==p[a])
                        //c++;
                        d=p[a]&p[b];
                        if(d==p[a])
                        c++;
                }
            }
            cout<<c<<endl;
        }
        c=0;
    }
}
