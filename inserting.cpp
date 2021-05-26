#include<bits/stdc++.h>
using namespace std;
int main()
{
	int size,n,ele,pos,i;
	cout<<"enter the size of array,number of elements";
	cin>>size>>n;
	if(size==n)
	{
		cout<<"array is filled";
		return 0;
	}
	int arr[size];
	for(i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	cout<<"enter the element to be inserted";
	cin>>ele;
	cout<<"enter the position";
	cin>>pos;
	int ind=pos-1;
	for(int j=n-1;j>=ind;j--)
	{
		arr[j+1]=arr[j];
	}
	arr[ind]=ele;
	n=n+1;
	cout<<"elements after insertion\n";
	for(i=0;i<n;i++)
	{
		cout<<arr[i]<<" ";
	}
	return 0;
}
