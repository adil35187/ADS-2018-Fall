#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
	int m,n,t;
	cin>>m>>n>>t;
	if (m>n)m=n;
	cout<<t/m<<endl;
	if (t%m!=0)
	{
		cout<<t%m<<endl; 
	}

	return 0;
}