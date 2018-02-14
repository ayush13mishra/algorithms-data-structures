#include<bits/stdc++.h>
using namespace std;

int main()
{
	int k,r;
	cin>>k>>r;
	int i=1;
	while(1)
	{
		int value = i*k;
		
		if(value%10==0 || value%10==r)
			break;
		i++;
	}
	
	cout<<i;
	return 0;
}