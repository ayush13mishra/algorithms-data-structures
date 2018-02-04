#include<bits/stdc++.h>
using namespace std;


int soln[4][4]={{0,0,0,0},{0,0,0,0},{0,0,0,0},{0,0,0,0}};


bool issafe(int x,int y,int maize[][4])
{
	if(x>=0&&x<=3&&y>=0&&y<=3&&maize[x][y]==1)
		return true;
	else
		return false;
}


bool solve(int maize[][4],int x,int y)
{
	soln[x][y]=1;
	if(x==3&&y==3)
		return true;
	
	if(issafe(x+1,y,maize))
		return solve(maize,x+1,y);
	
	if(issafe(x,y+1,maize))
		return solve(maize,x,y+1);
	
	soln[x][y]=0;
   return false;
}


int main()
{
	int maize[][4]={{1,0,0,0},{1,0,0,0},{1,0,0,0},{1,1,1,1}};
	bool x=solve(maize,0,0);
	for(int i=0;i<4;i++)
	{
		for(int j=0;j<4;j++)
			cout<<soln[i][j]<<" ";
		
		cout<<endl;
	}
	cout<<x<<endl;
	return 0;
}