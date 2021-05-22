#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,maxcount=0,max;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	for(int i=0;i<n;i++)
	{
		int count=0;
		for(int j=i;j<n;j++)
		{
			if(arr[i]==arr[j])
			{
				count+=1;
			}
		     if(count>maxcount)
		     {
			maxcount=count;
			max=arr[i];
		     }
	     }
	}
	cout<<"Number repeated max number of times is "<<max<<endl;
	cout<<"Number of times repeated "<<maxcount;
}
