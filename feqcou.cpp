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
	int *maxi=max_element(arr,arr+n);
	int frq[*maxi+1]={0};
	for(int i=0;i<n;i++)
	{
		frq[arr[i]]++;
	}
	int max=0;
	int id=0
	for(int i=0;i<*maxi;i++)
	{
		if(frq[i]>max)
		{
		    id=i;
		    max=frq[i];
	     }
	}
	cout<<"Customer id "<<id<<" arrived max times"<<maxi;
}

