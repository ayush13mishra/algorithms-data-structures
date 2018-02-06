#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n,m;
	cin>>n;
	int skillboy[n];
	for(int i=0;i<n;i++)
		cin>>skillboy[i];
	
	cin>>m;
	int skillgirl[m];
		
	for(int j=0;j<m;j++)
		cin>>skillgirl[j];
	
	bool girl[m];
	for(int i=0;i<m;i++)
		girl[i]=0;
	sort(skillboy,skillboy+n);
	sort(skillgirl,skillgirl+m);
	int count=0;
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
		{
				if(girl[j]==0&&abs(skillgirl[j]-skillboy[i])<=1)
				{
					girl[j]=1;
					count++;
					break;
				}
		}
	}
	cout<<count;
	return 0;
}