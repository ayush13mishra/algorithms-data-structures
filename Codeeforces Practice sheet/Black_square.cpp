#include<bits/stdc++.h>
using namespace std;

int main()
{
	map<int,int> mp;
	int a,b,c,d;
	cin>>a>>b>>c>>d;
	mp[1]=a;
	mp[2]=b;
	mp[3]=c;
	mp[4]=d;
	cin.ignore();
	string s;
	getline(cin,s);
	
	int n =s.length();
	int calorie=0;
	for(int i=0;i<n;i++)
	{
		if(s[i]=='1')
			calorie+=mp[1];
		else if(s[i]=='2')
			calorie+=mp[2];
		else if(s[i]=='3')
			calorie+=mp[3];
		else if(s[i]=='4')
			calorie+=mp[4];
	}
	cout<<calorie;
	return 0;
}