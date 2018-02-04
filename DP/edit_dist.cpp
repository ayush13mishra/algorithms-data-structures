#include<bits/stdc++.h>
using namespace std;

int foo(string p,string q,int m,int n)
{
	int dp[m+1][n+1];
	for(int i=0;i<=m;i++)
	{
		for(int j=0;j<=n;i++)
		{
			if(i==0)
				dp[i][j]=j;
			
		else if(j==0)
				dp[i][j]=i;
			
			else if(p[i-1]==q[j-1])
				dp[i][j]=dp[i-1][j-1];
			
			else
			{
				int x= min(dp[i-1][j],dp[i][j-1]);
				x= min(x,dp[i-1][j-1]);
				dp[i][j]=x+1;
			}
		}
	}
	
	for(int i=0;i<=m;i++)
	{
		for(int j=0;j<=n;j++)
			cout<<dp[i][j]<<" ";
		cout<<endl;
	}
	return dp[m][n];
}

int main()
{
	string p = "geek";
	string q= "gesek";
	int change= foo(p,q,4,5);
	cout<<change<<endl;
	return 0;
}