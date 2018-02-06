#include<bits/stdc++.h>
using namespace std;
//q', 'r', 'b', 'n', 'p', 'k',	9		5	3	3	1	0
int calc(char c)
{
	c=toupper(c);
	if(c=='Q')
		return 9;
	else if(c=='R')
		return 5;
	
	else if(c=='B')
		return 3;
	
	else if(c=='N')
		return 3;
	
	else if(c=='P')
		return 1;
	
	else
		return 0;
}

int main()
{
	char board[8][8];
	for(int i=0;i<8;i++)
	{
		for(int j=0;j<8;j++)
			cin>>board[i][j];
	}
	
	int b=0,w=0;
	for(int i=0;i<8;i++)
	{
		for(int j=0;j<8;j++)
		{
			if(board[i][j]=='.')
				continue;
			else if(isupper(board[i][j]))
			{
				w= w+calc(board[i][j]);
			}
			else
			{
				b=b+calc(board[i][j]);
			}
		}
	}
	if(w>b)
		cout<<"White";
	else if(b>w)
		cout<<"Black";
	else
	{
		cout<<"Draw";
	}
	return 0;	
}