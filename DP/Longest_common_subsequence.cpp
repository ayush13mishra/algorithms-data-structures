#include<bits/stdc++.h>
using namespace std;

int lcs(string a,string b)
{
	int x=a.length();
	int y=b.length();
	int L[x+1][y+1];
	for(int i=0;i<=x;i++)
	{
		for(int j=0;j<=y;j++)
		{
			if(i==0 || j==0)
				L[i][j]=0;
			else if(a[i-1]==b[j-1])
				L[i][j]=1+L[i-1][j-1];
			else
				L[i][j]=max(L[i-1][j],L[i][j-1]);
		}
	}
	return L[x][y];
}
int main()
{
	string a="AYUSH";
	string b="AIYUSH";
	int len = lcs(a,b);
	cout<<len;
	return 0;
}