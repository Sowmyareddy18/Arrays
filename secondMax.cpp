#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,max,max2;
	cin>>n;
	int a[n];
	max=INT_MIN;
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
     for(int i=0;i<n;i++)
     {
     	if(max<a[i])
     	{
     		max=a[i];
	     }
	     max2=-1;
	}
	for(int i=0;i<n;i++)
	{
		if(a[i]!=max)
		{
			if(max2==-1)
			{
				max2=i;
			}
			else if(a[i]>a[max2])
			{
				max2=i;
			}
		}
	}
	if(max2==-1)
	{
		cout<<"no second largest element";
	}
	else
	{
		cout<<a[max2];
	}
	return 0;
}
