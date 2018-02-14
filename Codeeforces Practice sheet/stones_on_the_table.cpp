#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	cin>>n;
	cin.ignore();
	string s;
	getline(cin,s);
	int count=0;
	for(int i=0;i<n;)
	{
		int j=i+1;
		while(s[j]==s[i])
		{
			count++;
			j++;
		}
		i=j;
	}
	cout<<count;
	return 0;
}