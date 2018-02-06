#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

//LLYA AND QUERIES PROBLEM 

int main()
{
	string s;
	getline(cin,s);
	ll n = s.length();
	
	ll range[n];
	for(int i=0;i<n;i++)
		range[i]=0;
	
	ll k=0;
	for(ll i=0;i<n-1;i++)
	{
		if(s[i]==s[i+1])
		{
			k++;	
			range[i]=k;
		}
		else
			range[i]=0;
	}
	
	for(int i=0;i<n;i++)
		cout<<range[i]<<" ";
	cout<<endl;
	ll m ;
	cin>>m;
	
	for(ll i=0;i<m;i++)
	{
		ll l,r;
		cin>>l>>r;
		cout<<range[r-2]-range[l-1]<<endl;
	}
	return 0;
}