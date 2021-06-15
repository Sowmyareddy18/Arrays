#include<bits/stdc++.h>
using namespace std;
int BS(int l,int h,int k,int a[])
{
	int mid;
	while(l<=h)
	{
		mid=(l+h)/2;
		if(a[mid]==k)
		{
			return mid;
			break;
		}
		else if(a[mid]>k)
		{
			h=mid-1;
		}
		else
		{
			l=mid+1;
		}
	}
}
int main()
{
	int n,k;
	cin>>n>>k;
	int a[n];
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	cout<<BS(0,n-1,k,a);
}
