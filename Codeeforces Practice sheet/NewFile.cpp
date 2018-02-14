#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int data;
	vector<int> v;
	for(int i=0;i<n;i++)
	{
		cin>>data;
		v.push_back(data);
	}
	int a=0,b=n-1;
	int sereja=0, dima=0;
	int i=0;
	while(a<=b)
	{
		int coin;
		if(v[a]>=v[b])
		{
			coin = v[a];
			a++;
		}		
		else 
		{
			coin = v[b];
			b--;
		}
		if(i%2 == 0)
			sereja+=coin;
		else
			dima+=coin;
		i++;
	}
	cout<<sereja<<" "<<dima;
	return 0;
}