#include<bits/stdc++.h>
using namespace std;

int main()
{
	string s1,s2;
	getline(cin,s1);
	getline(cin,s2);
	
	int len1= s1.length();
	int len2 = s2.length();
	
	if(len1==len2)
	{	
		int mid1= len1/2;
		int mid2 = len2/2;
		//cout<<mid1<<mid2;
		string s3=s1.substr(0,mid1);
		string s4 = s1.substr(mid1,len1-mid1);
		
		string s5=s2.substr(0,mid2);
		string s6 = s2.substr(mid2,len2-mid2);
		
		sort(s3.begin(),s3.end());
		sort(s4.begin(),s4.end());
		sort(s5.begin(),s5.end());
		sort(s6.begin(),s6.end());
		
		
		if(s3==s5 && s4==s6)
			cout<<"YES";
		else if(s3==s6 && s4==s5)
			cout<<"YES";	
		else
		{
			cout<<"NO";
		}
	}
	else
	{
		cout<<"NO";
	}
	return 0;
}