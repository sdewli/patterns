#include<iostream>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int i,j,k;
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n-i;j++)
		{
			cout<<" ";
		}
		for( k=0;k!=(2*i)-1;k++)
		{
			cout<<"*";
		}
		cout<<endl;
		k=0;
	}
		for(i=n-1;i>=1;i--)
	{
		for(j=1;j<=n-i;j++)
		{
			cout<<" ";
		}
		for( k=0;k!=(2*i)-1;k++)
		{
			cout<<"*";
		}
		cout<<endl;
		k=0;
	}
	
return 0;
}

