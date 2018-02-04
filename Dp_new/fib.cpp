#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

ll fib(ll f[], n)
{
	if(n<0)
		return 0;
	if(n==0||n==1)
		f[n]=1;
	if(f[n] != -1)
		return f[n];
	else
	{
		f[n]=fib(f,n-1)+fib(f,n-2);
		return f[n];
	}
}

int main()
{
	int f[100];
	for(int i=0;i<100;i++)
		f[i]=-1;
	int n;
	cin>>n;
	int ans= fib(f,n);
	cout<<ans;
	return 0;
}