#include<bits/stdc++.h>
using namespace std;

int calc(vector< pair<int,int> > v,int n,int i)
{
	int lis[n+1];
	lis[0]=1;
	
	for(int i=1;i<n;i++)
		lis[i]=1;
	
	for(int i=1;i<n;i++)
	{
		for(int j=0;j<i;j++)
		{
			if(v[j].second < v[i].first && lis[i]<lis[j]+1 )
			{
				lis[i]=lis[j]+1;
			}
		}
	}
	return lis[n-1];
}

int main()
{	
	vector< pair<int,int> > v;
	v.push_back(make_pair(5,24));
	v.push_back(make_pair(15,25));
	v.push_back(make_pair(27,40));
	v.push_back(make_pair(50,60));
	
	int chainlen= calc(v,4,0);
	cout<<chainlen;
	return 0;
}