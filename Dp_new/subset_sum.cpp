#include<bits/stdc++.h>
using namespace std;

int calc(int dp[],int set[],int n,int p)
{
	if(n==0)
		dp[n]=0;
	else if( dp[n]!=-1)
		return dp[n];
	else
	{
		for(int i=p;i<6;i++)
		{
			if(n-set[i]>=0)
				dp[n]=set[i]+calc(dp,set,n-set[i],i+1);		
			if(dp[n]==n)
				break;
		}
	}
	return dp[n];
}

int main()
{
	int n=30;
	int set[] = {3, 34, 4, 12, 5, 2};
	int dp[100];
	for(int i=0;i<100;i++)
		dp[i]=-1;
	
	int value= calc(dp,set,n,0);
//	cout<<value;
	if(value==n)
		cout<<true;
	else
		cout<<false;
	return 0;
}