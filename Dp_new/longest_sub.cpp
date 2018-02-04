#include<bits/stdc++.h>
using namespace std;

int calc(string s1,string s2,int n,int k)
{
	int dp[n+1][k+1];
	for(int i=0;i<=n;i++)
	{
		for(int j=0;j<=k;j++)
		{
			if(i==0||j==0)
				dp[i][j]=0;
			
			else if(s1[i-1]==s2[j-1])
				dp[i][j]=1+dp[i-1][j-1];
			else
				dp[i][j]=max(dp[i-1][j],dp[i][j-1]);	
		}
	}
	/*
	for(int i=0;i<=n;i++)
	{
		for(int j=0;j<=k;j++)
			cout<<dp[i][j]<<" ";
		
		cout<<endl;
	}*/
	return dp[n][k];
}

int main()
{
	string s1,s2;
	cin>>s1>>s2;
	int len1= s1.length();
	int len2= s2.length();
	int len = calc(s1,s2,len1,len2);
	cout<<len; 
	return 0;
}