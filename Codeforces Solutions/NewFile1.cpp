#include<bits/stdc++.h>
using namespace std;

int main()
{
	int a1,a2,a3,b1,b2,b3;
	cin>>a1>>a2>>a3>>b1>>b2>>b3;
	int n;
	cin>>n;
	int counta[n];
	for(int i=0;i<n;i++)
		counta[i]=0;
	int a =a1+a2+a3;
	int b =b1+b2+b3;
	for(int i=0;i<n;i=i+2)
	{
		if(b>10)
		{
			counta[i]=10;
			b=b-10;
		}
		else
		{
			counta[i]=b;
			b=0;
		}
	}
	for(int i=0;i<n;i++)
	{
		if(a>5&&counta[i]==0)
		{
			counta[i]=5;
			a=a-5;
		}
		else if(counta[i]==0)
		{
			counta[i]=a;
			a=0;
		}
	}
	
	if(a>0 || b>0)
		cout<<"NO";
	else
		cout<<"YES";
	
	cout<<endl;
	return 0;
}