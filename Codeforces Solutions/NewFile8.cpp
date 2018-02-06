#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n,c;
	cin>>n>>c;
	vector<int> v;
	int data;
	
	//ist data entering
	cin>>data;
	v.push_back(data);
	
	for(int i=1;i<n;i++)
	{
		cin>>data;
		int last=v.back();
		if(	( data- last)  >c )
			v.clear();
		v.push_back(data);	
	}
	
/*	int len =v.size();
	for(int i=0;i<len;i++)
		cout<<v[i]<<" ";*/
	cout<<v.size();
	return 0;
}