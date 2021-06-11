#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,s,sum=0,flag=0;
	cin>>n;
	cin>>s;
	int a[n];
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	for(int i=0;i<n;i++)
	{
		for(int j=i;j<n;j++)
		{
			sum=0;
			for(int k=i;k<=j;k++)
			{
				sum=sum+a[k];
			}
			if(sum==s)
	          {
				cout<<"YES";
				flag=1;
			}
		}
	}
	if(flag==0)
	{
		cout<<"No";
	}
}
/*
3
5
1 2 3
YES
3
4
1 2 3
No
*/

