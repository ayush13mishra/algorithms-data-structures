#include<bits/stdc++.h>
using namespace std;

void calc(int set[],int n)
{
	int lcs[n+1];
	lcs[0]=set[0];
	
	for(int i=1;i<n;i++)
		lcs[i]=INT_MIN;
	
	for(int i=1;i<n;i++)
	{
		for(int j=0;j<i;j++)
		{
			if (set[j]<set[i] && lcs[j]+set[i]>lcs[i])
				lcs[i]=set[i]+lcs[j];
		}
	}
	int maxm = *max_element(lcs,lcs+n);
/*	for(int i=0;i<n;i++)
		cout<<lcs[i]<<" ";*/
	cout<<maxm;
	return;
}

int main()
{
	int set[]= {1, 101, 2, 3, 100, 4, 5};
	calc(set,7);
	return 0;
}