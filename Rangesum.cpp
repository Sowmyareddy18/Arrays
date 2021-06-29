#include<bits/stdc++.h>
using namespace std;
void Rangesum(int n,int a[],int q)
{
	int l,r,sum;
	while(q)
	{
		sum=0;
		cin>>l>>r;
		for(int i=l;i<=r;i++)
		{
			sum+=a[i];
		}
		cout<<sum<<"\n";
		q--;
	}
}
int main()
{
	int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++)cin>>a[i];
	int q;
	cin>>q;
	Rangesum(n,a,q);
	return 0;
}
/*
5
10 20 30 40 50
2
0 4
150
2 4
120
*/
