#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n,m,k;
	cin>>n>>m>>k;
	int player[m+1];
	int pot=0;
	for(int i=0;i<m+1;i++)
	{
		cin>>player[i];
	}
	for(int i=0;i<m;i++)
	{
		int x= player[m]^player[i];	//number having bits difference
		int count=0;
		while(x)
		{
			int v= x&1;	//checking the last bit 
			if(v)
				count++;
			x=x>>1;	//right shifting
		}
		if(count<=k)
			pot++;
	}
	cout<<pot;
	return 0;
}
