#include<bits/stdc++.h>
#include<algorithm>
using namespace std;

void printsub(int m[][5],int r,int c)
{
	int s[r][c];
	int maxm;
	for(int i=0;i<c;i++)
		s[0][i]=m[0][i];
	
	for(int i=0;i<r;i++)
		s[i][0]=m[i][0];
	
	for(int i=1;i<r;i++)
	{
		for(int j=1;j<c;j++)
		{
			if(m[i][j]==1)
			{
				int p =min(s[i-1][j],s[i][j-1]);
				int q= min(p, s[i-1][j-1]);
				s[i][j]=q+1;
			}
			else if(m[i][j]==0)
				s[i][j]=0;
		}
	}
	maxm= s[0][0];
	int maxi=0;
	int maxj=0;
	for(int i=0;i<r;i++)
	{
		for(int j=0;j<c;j++)
		{
			cout<<s[i][j]<<" ";
			if(s[i][j]>=maxm)
			{
				maxm=s[i][j];
				maxi = i;
				maxj=j;
			}		
		}
		cout<<endl;
	}
	cout<<endl;
	
}

int main()
{
	int M[6][5] =  {{0, 1, 1, 0, 1}, 
                   {1, 1, 0, 1, 0}, 
                   {0, 1, 1, 1, 0},
                   {1, 1, 1, 1, 0},
                   {1, 1, 1, 1, 1},
                   {0, 0, 0, 0, 0}};
                
   printsub(M,6,5);
	
}