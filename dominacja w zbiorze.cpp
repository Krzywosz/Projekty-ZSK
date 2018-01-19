#include<iostream>
#include<cmath>
#include<ctime>
#include<cstdlib>

using namespace std;

void losuj( int *T)
{
	srand(time(NULL));
	for(int i=0;i<=10;i++)
	{
		T[i]=rand()%2;
	}
}

void zlicz(int *T,int *V)
{
	int l=T[0];
	for(int i=0;i<=10;i++)
	{
		if (T[i]==l) V[l]++;
		else
		{
			l=T[i];
			V[l]++;
		}
		
	}
	
	int x=V[0];
	for(int i=0;i<=1;i++)
	{
		if(V[i]>x) x=V[i];	
	}
	
	cout<<x;
}

void pokaz(int *T)
{
	for(int i=0;i<=10;i++)
	cout<<T[i]<<endl;
}

int main()
{
	int T[10];
	losuj(T);
	pokaz(T);
	int V[1]={0};
	zlicz(T,V);
}

