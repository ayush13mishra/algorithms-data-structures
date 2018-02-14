#include<bits/stdc++.h>
#include<utility>
using namespace std;

int main()
{
	int n;
	cin>>n;
	pair<int,int> v[n];
	
	int home, guest;
	for(int i=0;i<n;i++)
	{
		cin>>home>>guest;
		pair<int,int> data =make_pair(home,guest);
		v[i] = data;
	}
	int target =0;
	
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			if(j==i)
				continue;
			else
			{
				
				if(v[i].first == v[j].second)
					   target++;					
			}
		}
	}	
	
	cout<<target;
	return 0;
}