#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
	int n;
	cin>>n;
	ll arr[n+1];
	arr[0]=0;
	arr[1]=1;
	for(int i=2;i<=n;i++)
		arr[i]=arr[i-1]+arr[i-2];
	cout<<arr[n];
	return 0;	
}