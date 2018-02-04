#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

ll bino(ll n,ll' k)
{
	ll c[n+1][k+1];
	for(ll i=0;i<=n;i++)
	{
		for(ll j=0;j<=min(i,k);j++)
		{
			if(j==0||j==i)
				c[i][j]=1;
			else
				c[i][j]=c[i-1][j-1]+c[i-1][j];
		}
	}
	return c[n][k];
}

int main()
{
	ll n,k;
	int t;
	cin>>t;
	while(t--){
	cin>>n>>k;
	ll ans;
	if(n>=k)
		 ans =bino(n,k);
	else
		 ans=0;
	cout<<ans;}
	return 0;
}