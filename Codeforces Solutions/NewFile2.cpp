#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
	ll n;
	cin>>n;
	int w[n],p[n];
	
	for(int i=0;i<n;i++)
		cin>>w[i]>>p[i];
	int cost=0;
	
	for(int i=0;i<n;i++)
	{
		int curr =p[i];
		int weight =w[i];
		while(i+1<n&&curr<=p[i+1])
		{
			i++;
			weight+=w[i];
		}
		cost+= (weight*curr);
	}
	cout<<cost;
	return 0;
}