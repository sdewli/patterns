/*
n=9
        *
       **
      * *
     *  *
    *   *
   *    *
  *     *
 *      *
*********
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
	for(k=n-1;k>=i;k--)
	cout<<" ";
  for(j=1;j<=i;j++)
  {
  	if(j==1||j==i||i==n)
  	cout<<"*";
  	else
  	cout<<" ";
	  }	
	  cout<<endl;
}	
	return 0;
}
