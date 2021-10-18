#include <iostream>
using namespace std;

int main() {
	int t,d,v;
	cin>>d;
	cin>>t;
	if(1<=t<=150 && 1<=d<=3000)
	{
	   v=d/t;
	   if(v<30)
	   {
	       cout<<"FIRED";
	   }
	   else
	   {
	       cout<<"NOT FIRED";
	   }
	}
	return 0;
}
