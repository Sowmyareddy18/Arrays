#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,flag=1;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	for(int i=0;i<n-1;i++)
	{
		if(a[i]>a[i+1])
		{
			flag=0;
			break;
		}
	}
	if(flag==1)
	{
		cout<<"sorted";
	}
	else
	{
		cout<<"not sorted";
	}
}
