#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int calc(pair<ll ,ll > arr[],ll worm,ll n)
{
	ll l=0,r=n-1;
	while(l<=r)
	{
		ll mid =(l+r)/2;
		if(worm>=arr[mid].first&&worm<=arr[mid].second)
			return mid;
		else if(worm<arr[mid].first)
			r=mid-1;
		else
			l=mid+1;
	}
	return -1;
}

int main()
{
	ll n;
	cin>>n;
	int range[n];
	
	for(ll i=0;i<n;i++)
		cin>>range[i];
	pair<ll,ll> arr[n];
	ll prev=0;
	
	for(ll i=0;i<n;i++)
	{
		arr[i]=make_pair(prev+1,prev+range[i]);
		prev=prev+range[i];
	}
	ll m;
	cin>>m;
	ll worms[m];
	for(ll i=0;i<m;i++)
	{
		cin>>worms[i];
	}
	
	//Query time
	for(int i=0;i<m;i++)
	{
		int shelf=calc(arr,worms[i],n);
		if(shelf!=-1)
			cout<<shelf+1<<endl;
	}	
	
	return 0;
}