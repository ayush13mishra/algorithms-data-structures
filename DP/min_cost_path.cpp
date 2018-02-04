#include<bits/stdc++.h>
using namespace std;

void make(int mk[][3],int r,int c)
{
	int rk[r][c];
	rk[0][0]=mk[0][0];
	for(int i=1;i<c;i++)
		rk[0][i]=mk[0][i]+rk[0][i-1];
	
	
	for(int i=1;i<r;i++)
		rk[i][0]=mk[i][0]+rk[i-1][0];
	for(int i=1;i<r;i++)
	{
		for(int j=1;j<c;j++)
		{
			int p = min(rk[i-1][j],rk[i][j-1]);
			p = min(p,rk[i-1][j-1]);
			rk[i][j]=p+mk[i][j];
		}
	}
		
	for(int i=0;i<r;i++)
	{
		for(int j=0;j<c;j++)
			cout<<rk[i][j]<<" ";
		
		cout<<endl;
	}
}

int main()
{
	int cost[3][3] = { {1, 2, 3},
                      {4, 8, 2},
                      {1, 5, 3} };
   make(cost,3,3);
   return 0;
}