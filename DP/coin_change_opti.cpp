#include<bits/stdc++.h>
using namespace std;

void mincoins(int coins[],int c,int value)
{
	sort(coins,coins+c);
	int table[value+1];
	table[0]=0;
	for(int i=1;i<value+1;i++)
		table[i]=INT_MAX;
	
	for(int i=1;i<value+1;i++)
	{
		int sub=0;
		for(int j=0;j< c ;j++)
		{
			if(i-coins[j]>=0)
			{
				sub= table[i-coins[j]]+1;
				if(sub < table[i])
					table[i]=sub;
			}
		}
	}
	for(int i=0;i<value+1;i++)
		cout<<table[i]<<" ";
	cout<<endl;
}
int main()
{
	int coins[] ={25, 10, 5};
    int m =3;
    int V = 30;
    mincoins(coins,m,V);
    return 0;

}