#include<bits/stdc++.h>
using namespace std;

int calc(int dp[],int n,int coins[])
{
	//if value =0 then no of denomiation is also zero
	if(n==0)
		dp[n]=0;
	else if(dp[n] != -1)
		return dp[n];
	else
	{
		int result=INT_MAX;
		 for(int i=0;i<7;i++)
		 {
		 	if(n-coins[i]>=0)
		 		result= min(result,calc(dp,n-coins[i],coins));
		 }
		 dp[n]=result+1;
	}
	return dp[n];
}


int main()
{
	int n;
	cin>>n;
	int coins[]= {10,1,2,3,4,7,9};
	int dp[100];
	for(int i=0;i<100;i++)
		dp[i]=-1;
	
	int min_coins= calc(dp,n,coins);  
	cout<<min_coins; 	
	return 0;
}