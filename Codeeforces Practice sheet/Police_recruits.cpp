#include<bits/stdc++.h>
using namespace std;
typedef long long ll;


int main()
{
	int data;
	ll n;
	cin>>n;
	ll force = 0 , crime=0;
	for(int i=0;i<n;i++)
	{
		cin>>data;
		if(data!=-1)
			force+=data;
		
		
		else if(data ==-1)
		{
			if(force>0)
				force-=1;
			
			else if(force ==0)
				crime++;	
		}
	}
	cout<<crime;
	return 0;
}