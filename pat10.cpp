/*
n=5
    1
   202
  30003
 4000004
500000005
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
			for(k=1;k<=(2*i)-1;k++)
		{
			if(k==1 || (k==(2*i)-1))
			cout<<i;
			else
			cout<<0;
		}
		cout<<endl;
		
	}
    return 0;
}
