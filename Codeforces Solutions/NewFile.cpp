#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
	long long t;
	cin>>t;
	cin.ignore();
	string s,s2;
	while(t--)
	{
		getline(cin,s);
		long long len = s.length();
		s2 = s.substr(0,4);
		long long last=3;
		long long count=0;
		while(last<len)
		{
			string s3 =s2;
			sort(s3.begin(),s3.end());
			if(s3=="cefh")
				count++;
			last++;
			s2= s2.substr(1,3);
			string add=s.substr(last,1);
			s2+=add;
		}
		if(count)
			cout<<"lovely"<<" "<<count;
		else
			cout<<"normal";
		cout<<'\n';
	}
	return 0;
}