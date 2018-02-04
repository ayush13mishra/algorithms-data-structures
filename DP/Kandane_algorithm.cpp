//Kadane Algorithm or Maxm Contiguous Array sum
#include<bits/stdc++.h>
using namespace std;
//For all negative nos check 
/*
void find(int arr[],int n)
{
	int curmax= arr[0];
	int max_so_far =arr[0];
	for(int i=1;i<n;i++)
	{
		if(curmax+arr[i]>curmax)
			curmax=curmax+arr[i];
		if(curmax>max_so_far)
			max_so_far=curmax;
	}
	cout<<max_so_far;
}*/

void find(int a[],int n)
{
	int max=0,cur=0;
	int start=0,end=0;
	for(int i=0;i<n;i++)
	{
		cur+=a[i];
		if(cur<0)
		{
			cur=0;
			start+=1;
		}
		if(max<cur)
		{
			max=cur;
			end=i;
		}
	}
	cout<<max<<" "<<start<<" "<<end;	
}

int main()
{
	int arr[]=   {-2, -3, 4, -1, -2, 1, 5, -3};
	find(arr,7);
	return 0;
}