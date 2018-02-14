#include<bits/stdc++.h>
using namespace std;

int main()
{
	string s;
	getline(cin,s);
	int rotations=0;
	
	
	int n= s.length();
	for(int i=0;i<n;i++)
	{
		int diff;
		if(i==0)
			diff= abs(s[i]-'a');
		else
 	    	diff = abs(s[i]-s[i-1]);
 	    
		if(diff<=13)
			rotations+=diff;
		else
			rotations+=(26-diff);
	}
	
	cout<<rotations;
	return 0;
}