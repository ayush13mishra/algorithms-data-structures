#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
	ll k2,k3,k5,k6;
	cin>>k2>>k3>>k5>>k6;
	
	ll first=0;	//256 count
	ll second=0;	//32 count
	
	first = min(k2,k5);
	first =min(first,k6);
	
	k2 = k2-first;
	second = min(k2,k3);
	cout<<(first*256)+(second*32);
	return 0;
}