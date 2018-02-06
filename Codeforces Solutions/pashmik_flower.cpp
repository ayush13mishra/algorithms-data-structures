#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
//Pashmak and flowers problem DIV 2 b
int main()
{
	ll n;
	cin>>n;
	ll flowers[n];
	
	for(ll i=0;i<n;i++)
		cin>>flowers[i];
	
	sort(flowers,flowers+n);
	ll diff = flowers[n-1]-flowers[0];
	if(diff==0)
		cout<<diff<<" "<<(n*(n-1))/2;
	else
	{
		
	ll counto=0,counth=0;
	
	for(ll i=0;i<n;i++)
	{
		if(flowers[i]==flowers[0])
			counto++;
		else if(flowers[i]==flowers[n-1])
			counth++;
	}
	cout<<diff<<" "<<counto*counth;
	}
	return 0;
}