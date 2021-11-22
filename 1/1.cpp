#include <iostream>
using namespace std;


string f(int x1, int y1, int x2, int y2) {
	if (y1 == y2 && x1==x2) {
		return "tochka";
	}
	if (y1 == y2) {
		return "gorizontalno";
	}
	if (x1 == x2) {
		return "vertikalno";
	}
	else {
		return "naklonno";
	}
}

int main()
{
	int n;
	int x1, x2, y1, y2;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> x1 >> y1 >> x2 >> y2;
		cout << f(x1, y1, x2, y2)<<endl;

		

	}
}