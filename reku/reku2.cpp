#include <iostream>

using namespace std;

int potega(int p, int w)
{
	if (w==0) return 1;
	else return p*potega(p,w-1);
}
 
int main(){
	int p, w;
	cin>>p>>w;
	cout<<potega(p,w);
	return 0;
}
