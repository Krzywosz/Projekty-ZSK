#include<iostream>
#include<cmath>
using namespace std;

int main()
{
	int n,j;
	cin>>n;
	int T[n+1];
	int p(sqrt(n));
	for(int a=1;a<=n;a++)
	{
		T[a]=a;
	}
	
	for(int i=2;i<=p;i++)
	{
		if(T[i]!=0)
		for(j=2*i;j<=n;j+i)
		{
			T[j]=0;
		}

	}
	for(int i=2;i<=n;i++)
	{
		if(T[i!=0])
			cout<<T[i]<<" "<<endl;
	}
	
	
	
}
