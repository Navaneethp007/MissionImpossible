#include <iostream>
using namespace std;

int main() {
        int a[3],m=0,t=0;
        for(int i=0; i<3; i++)
        {
            cin>>a[i];
        }
        for(int i=0; i<3; i++)
        {
           for(int j=i+1; j<3; j++)
           {
               if(a[i]>a[j])
               {
                   t=a[i];
                   a[i]=a[j];
                   a[j]=t;
               }
           }
        }
        m=a[1];
        if((a[1]==a[2]) && a[1]>a[0])
        {
            cout<<a[0]<<"\n";
        }
        else if((a[1]==a[2]) && a[1]<a[0])
        {
            cout<<m<<"\n";
        }
        else if((a[0]==a[1]) && a[1]>a[2])
        {
            cout<<a[2]<<"\n";
        }
        else if((a[0]==a[1]) && a[1]<a[0])
        {
            cout<<m<<"\n";
        }
       else if((a[0]==a[2]) && a[1]>a[2])
        {
            cout<<a[2]<<"\n";
        }
        else if((a[0]==a[2]) && a[1]<a[2])
        {
            cout<<m<<"\n";
        }
        else
        {
            cout<<m<<"\n";
        }
	return 0;
}
