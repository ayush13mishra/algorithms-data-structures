#include<bits/stdc++.h>
using namespace std;


int calc(int m, int n)
{
	int dp[m][n];
	
	dp[0][0]=0;
	for(int i=0;i<m;i++)
	{
		
		for(int j=0;j<n;j++)
		{
			if(i==0 && j==0)
				dp[i][j]=0;
			
			else if(i==0||j==0)
				dp[i][j]=1;
			else
			{
				dp[i][j]=dp[i-1][j]+dp[i][j-1];
			}
		}
	}
	
	for(int i=0;i<m;i++)
	{
		for(int j=0;j<n;j++)
			cout<<dp[i][j]<<" ";
		
		cout<<endl;
	}
	return dp[m-1][n-1];
}
int main()
{
	int m,n;
	cin>>m>>n;
	int path =calc(m,n);
	cout<<path;
	return 0;
}