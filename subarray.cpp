#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	for(int i=0;i<n;i++)
	{
		for(int j=i;j<n;j++)
		{
			for(int k=i;k<=j;k++)
			{
				cout<<a[k]<<" ";
			}
			cout<<endl;
		}
	}
}
/*
3
1 2 3
1
1 2
1 2 3
2
2 3
3
*/
