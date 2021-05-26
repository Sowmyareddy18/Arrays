#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,flag=0,x;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	cin>>x;
	for(int i=0;i<n;i++)
	{
		if(x==arr[i])
		{
		cout<<i<<"\n";
	     flag++;
	     break;
	     }
	}
	if(flag==0)
	 cout<<-1<<"\n";
}
