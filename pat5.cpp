#include<iostream>
using namespace std;
int main()
{
	int n;
	cin>>n;
    int i,j,k;
 
 for(i=0;i<n;i++)
{
	for(k=0;k<2*i;k++)
	{
		cout<<" ";
	}
	for(j=i;j<n;j++)
	{
		cout<<"*";
	}
	cout<<endl;
	
}
 
 
    return 0;
}
