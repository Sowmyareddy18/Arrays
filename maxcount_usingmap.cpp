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
	map<int,int>mcount;
	for(int i=0;i<n;i++)
	{
		frq[arr[i]]++;
	}
	int maxi=0;
	int id=0;
	for(auto it:frq)
	{
		if(it.second>maxi)
		{
			maxi=it.second;
			id=it.first;
		}
	}
	cout<<"Customer id "<<id<<" arrived max times"<<maxi;
}
