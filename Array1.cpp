#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	int maxi=INT_MIN; // int maxi=arr[i]
	for(int i=0;i<n;i++)
	{
		if(maxi<arr[i])
		{
			maxi=arr[i];
		}
	}
	cout<<maxi<<;
	int min;
	for(int i=0;i<n;i++)
	{
		if(min>arr[i])
		{
			min=arr[i];
		}
	}
	cout<<min;
}
