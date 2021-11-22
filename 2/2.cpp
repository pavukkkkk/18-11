#include <iostream>
using namespace std;
int main()
{
	long double x, n, p = 0, b, e, a, t;
	t = pow(10, -9);
	cout << "vvedite e: ";
	cin >> e;
	a = 4;
	b = 1;
	long long i = 1;
	if (e > 0) {
		while (abs(a) + t > e) {
			p += a;
			i++;
			b *=i;
			a = (i + 3) /b;
		}
			
	}
	cout << "p= " << p << endl;

}