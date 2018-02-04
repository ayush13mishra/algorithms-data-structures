#include<bits/stdc++.h>
using namespace std;


int calc(int n,int k)
{
	int dp[n+1][k+1];
	for(int i=0;i<=n;i++)
	{
		for(int j=0;j<=k;j++)
		{
			if(j==0)
				dp[i][j]=1;
			else if(i==j)
				dp[i][j]=1;
			else
			{
				dp[i][j]=dp[i-1][j-1]+dp[i-1][j];
			}
		}
	}
	return dp[n][k];
}
int main()
{
	int n,k;
	cin>>n>>k;
	int coff = calc(n,k); 
	cout<<coff;
	return 0;
}