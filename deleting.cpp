#include <bits/stdc++.h>
using namespace std;
int main() 
{
	int n,ele,ind=-1;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++)
	{
	    cin>>arr[i];
	}
	cout<<"enter element to delete";
	cin>>ele;
	for(int i=0;i<n;i++)
	{
	    if(arr[i]==ele)
	    {
	       ind=i;
	       break;
	    }
	}
	if(ind==-1)
	{
	    cout<<"element is not found";
	    return 0;
	}
	for(int i=ind;i<n;i++)
	{
	    arr[i]=arr[i+1];
	}
	n--;
	cout<<"array after deleting the element is"<<endl;
	for(int i=0;i<n;i++)
	{
	    cout<<arr[i]<<" ";
	}
	return 0;
}
/* 
output:
5
10 12 13 14 15
enter element to delete12
array after deleting the element is
10 13 14 15
*/
