#include<bits/stdc++.h>
using namespace std;

int calc(int profit[],int price[],int n)
{
	
	if(n==0)
		return 0;
	
	else if(profit[n]!=-1)
		return profit[n];
	
	else
	{
		int result= INT_MIN;
		for(int i=1;i<=n;i++)
		{
			if(n-i>=0)
				result= max(result,price[i-1]+calc(profit,price,n-i));
		}
		profit[n]=result;
	}
	return profit[n];
}


int main()
{
	int n=8;
	int profit[100];
	for(int i=0;i<100;i++)
		profit[i]=-1;
	int price[]= {  3 ,  5 ,  8  , 9,  10,  17  ,17  ,20};
	int prof  = calc(profit,price,n);
	cout<<prof;
	return 0;
}