#include<bits/stdc++.h>
using namespace std;
int main()
{
	ios_base::sync_with_stdio(false);
     cin.tie(NULL);
	int n,l,r;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++)cin>>a[i];
	int prefix[n];
	prefix[0]=a[0];
	for(int i=0;i<n;i++)
	{
		prefix[i]=prefix[i-1]+a[i];
	}
	int q;
	cin>>q;
	while(q--)
	{
		cin>>l>>r;
		if(l==1)
		{
			cout<<prefix[r-1]<<"\n";
		}
		else
		{
			cout<<prefix[r-1]-prefix[l-2]<<"\n";
		}
	}
	return 0;
}
/*
4
10 20 30 40
2
1 4
2 3
100
50
*/
