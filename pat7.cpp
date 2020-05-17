/*
n=5
    *
   **
  ***
 ****
*****
 ****
  ***
   **
    *
    */

#include<iostream>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int i,j,k;
     for(i=1;i<=n;i++)
     {
	for(j=n-1;j>=i;j--)
	{
		cout<<" ";
	}
	for(k=1;k<=i;k++)
	{
		cout<<"*";
	}cout<<endl;
	} 
	  for(i=n-1;i>=1;i--)
     {
	for(j=n-1;j>=i;j--)
	{
		cout<<" ";
	}
	for(k=1;k<=i;k++)
	{
		cout<<"*";
	}cout<<endl;
	}  	
	
	return 0;
}
