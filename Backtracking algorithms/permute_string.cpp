#include<bits/stdc++.h>
using namespace std;

void permute(string s,int l,int r)
{
	//Base Case if l==r
	if(l==r)
		cout<<s<<endl;
	else
	{
		for(int i=l;i<=r;i++)
		{
			swap(s[i],s[l]);
			permute(s,l+1,r);
			swap(s[i],s[l]);
		}
	}
}


int main()
{
	string s;
	getline(cin,s);
	int len = s.length();
	permute(s,0,len-1);
	return 0;
}