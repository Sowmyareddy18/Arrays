#include<bits/stdc++.h>
using namespace std;
bool ispossible(int n,int array[], int mid,int students)
{
	int count=1;
	int sumofallocation=0;
	for(int i=0;i<n;i++)
	{
		if(sumofallocation+array[i]>mid)
		{
			count++;
			sumofallocation=array[i];
			if(sumofallocation>mid) 
			{
				return false;
		     }
		}
		else
		{
			sumofallocation+=array[i];
		}
	}
     if(count>students)
    	{
    		return false;
    	}
	return true;
}
int allocating_books(int n,int a[],int st) 
{
	int low,high,mid,sum=0,ans=-1;
	for(int i=0;i<n;i++)
	{
		 sum=sum+a[i];
	}
	low=*min_element(a,a+n);
	high=sum;
	while(low<=high)
	{
		mid=low+((high-low)/2);
		if(ispossible(n,a,mid,st))
		{
			ans=mid;
			high=mid-1;
		}
		else
		low=mid+1;
	}
	return ans;
}
int main()
{
	int n,st;
	cin>>n>>st;
	int a[n];
	for(int i=0;i<n;i++)cin>>a[i];
	cout<<allocating_books(n,a,st);
	return 0;
}
/*
4 2
12 34 67 90
113

6 3
9 15 22 35 57 64
81
*/
