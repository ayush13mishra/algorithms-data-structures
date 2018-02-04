//Longest Repeated Subsequece 
#include<bits/stdc++.h>
using namespace std;

void findlcs(string s)
{
	   int n = s.length();
	   int l[n+1][n+1];
	   for(int i=0;i<=n;i++)
	   {
	   	for(int j=0;j<=n;j++)
		   {
		   	if(i==0||j==0)
		   		l[i][j]=0;
		   	else if(s[i-1]==s[j-1] && i!=j)
		   		l[i][j]=1+l[i-1][j-1];
		   	else
		   		l[i][j]=max(l[i-1][j],l[i][j-1]);
		   }
	   }
	   cout<<l[n][n];
	   //Printing the subsequence
	   int i=n,j=n;
	   string res="";
	   while(i>0 && j>0)
	   {
	   	if(l[i][j]==1+l[i-1][j-1])
		   {
		   	res+=s[i-1];
		   	i--;j--;
		   }
		   else if( l[i][j]==l[i-1][j])
		   	i--;
		   else
		   	j--;
	   }
	   reverse(res.begin(),res.end());
	   cout<<endl<<res<<endl;	
}

int main()
{
	string s= "AABEBCDD";
	findlcs(s);
}