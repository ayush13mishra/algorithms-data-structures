//Catalan No

// Count of no of pair tthat match // no of full binary trees /// no of BSTs with n keys
#include<bits/stdc++.h>
using namespace std;

void calc(int n)
{
	int c[n+1];
	c[0]=1;
	for(int i=1;i<=n;i++)
	{
		c[i]=0;
		for(int j=0;j<i;j++)
		{
			c[i]+=c[j]*c[i-j-1];
		}
	}
	cout<<c[n];
}

int main()
{
	int n;
	cin>>n;
	calc(n);
	return 0;
}