#include<iostream>

using namespace std;

int xd (int n)
{
	if(n==0) return 5;
	else return xd(n-1)+3;
}

int main()
{
	int n;
	cin>>n;
	cout<<xd(n);
	return 0;
}
