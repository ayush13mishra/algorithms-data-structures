#include<bits/stdc++.h>
using namespace std;

int main()
{
	string stone;
	string instruct;
	getline(cin,stone);
	getline(cin,instruct);
	int n = instruct.length();
	int n2 = stone.length();
	
	int pos =0;
	for(int i=0;i<n;i++)
	{
		if(instruct[i]==stone[pos] && pos<n2-1)
			pos++;
	}
	cout<<pos+1;
	return 0;
}