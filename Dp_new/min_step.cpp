#include<bits/stdc++.h>
using namespace std;
int fin(int dp[],int n)
{
	if(n==1)
		dp[n]=0;
	else if(dp[n] != -1)
		return dp[n];
	else if(n%2==0&&n%3==0)
	{
		dp[n]= min(fin(dp,n-1),fin(dp,n/2));
		dp[n]=1+ min(dp[n],fin(dp,n/3));
		return dp[n];
	}
	else if(n%2==0)
	{
		dp[n]= 1+min(fin(dp,n-1),fin(dp,n/2));
		return dp[n];
	}
	else if(n%3==0)
	{
		dp[n] = 1+min(fin(dp,n-1),fin(dp,n/3));
		return dp[n];
	}
	else
	{
		dp[n]=1+fin(dp,n-1);
	}
	return dp[n];
}

int main()
{
	int n;
	cin>>n;
	
	int dp[100];
	for(int i=0;i<100;i++)
		dp[i]=-1;
	int min = fin(dp,n);
	cout<<min;
	return 0;
}