#include<iostream>

using namespace std;

int hanoi(int n, char a, char b, char c){
	if (n>0){
		hanoi(n-1,a,c,b);
		cout<<a<<" na "<<b<<endl;
		hanoi(n-1,c,b,a);
	}
}

int main(){
	cout<<hanoi(3, 'A', 'B', 'C'); 
}
