#include<bits/stdc++.h>
using namespace std;

void lis(int a[],int n)
{
	int l[9];
	for(int i=0;i<n;i++)
	{
		l[i]=1;
	}
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<i;j++)
		{
			if(a[j]<a[i] && l[i]<l[j]+1)
				l[i]=1+l[j];
		}
	}
	for(int i=0;i<n;i++)
		cout<<l[i]<<" ";
}

int main()
{
	int a[]= { 10, 22, 9, 33, 21, 50, 41, 60 };
	lis(a,8);
}