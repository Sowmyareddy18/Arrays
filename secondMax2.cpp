#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,M1=-1,M2=-1;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	M1=a[0];
	for(int i=0;i<n;i++)
	{
		if(a[i]>M1)
		{
			M2=M1;
			M1=a[i];
		}
		else if(a[i]>M2)
		{
			M2=a[i];
		}
	}
	cout<<M2;
	return 0;
}
