#include<iostream>
using namespace std;
int main()
{
	int n;
	cin>>n;
    int i,j,k;
for(i=1;i<=n;i++)
{
	for(k=1;k<i;k++)
	{
		cout<<" ";
	}
	for(j=i;j<=n;j++)
	{
		cout<<"*";
	}
	cout<<endl;
	
}
return 0;
}
