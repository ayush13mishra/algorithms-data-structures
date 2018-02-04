#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
	int t;
	cin>>t;
	while(t--){
	int n,k;
	cin>>n>>k;
	ll num=1;
	int i=1;
	int para= min(k,n-k);
	while(i<=para)
	{
		num*=n;
		n-=1;
		i++;
	}
	ll deno=1;
	while(para>0)
	{
		deno*=para;
		para-=1;
	}
	ll ans =num/deno;
	cout<<ans;}
	return 0;
}