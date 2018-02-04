#include<bits/stdc++.h>
using namespace std;

void calc(string s1,string s2)
{
	int n = s1.length();
	int k = s2.length();
	int dp[n+1][k+1];
	
	int result= INT_MIN;
	for(int i=0;i<=n;i++)
	{
		for(int j=0;j<=k;j++)
		{
			if(i==0 ||j==0)
				dp[i][j]=0;
			
			else if(s1[i-1]==s2[j-1])
				dp[i][j]= 1+dp[i-1][j-1];
			
			else
			{
				 dp[i][j]=0;  	
			}
			result=max(result,dp[i][j]);
		}
	}
	
	cout<<result;
	return ;
}

int main()
{
	string s1,s2;
	cin>>s1>>s2;
	calc(s1,s2);
	return 0;
}