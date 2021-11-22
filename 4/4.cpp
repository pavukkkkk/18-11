#include <iostream>
using namespace std;




int main()
{
	int n,b=1,a=0,c;
	cin >> n;
	for (int i = 1; i < n; i++) {
		c = b;
		b += a;
		a= c;
	}
	for (int i = 1; i < n+1; i++) {
		cout << b << endl;
		c = b;
		b = a;
		a = c - a;
	}
	
}