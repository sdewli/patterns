/*
n=10
         0
        909
       89098
      7890987
     678909876
    56789098765
   4567890987654
  345678909876543
 23456789098765432
1234567890987654321
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
	for(j=1;j<=n;j++)
	{
		if(j>n-i)
		cout<<j%10;
		else
		cout<<" ";
	}
	for(j=1;j<i;j++)
	{
		cout<<n-j;
	}
	cout<<endl;
}




    return 0;	
}
	
