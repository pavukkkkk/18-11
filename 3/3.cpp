#include <iostream>
using namespace std;

int main()
{
	int n;
	cin >> n;
	int* mas = new int[n];
	for (int i = 0; i < n; i++) {
		cin >> mas[i];
	}
	if (n % 2 != 0) {
		mas[n / 2] *= 2;
	}
	else {
		mas[n / 2] += mas[n / 2 - 1];
		mas[n / 2 - 1] = mas[n / 2] - mas[n / 2 - 1];
		mas[n / 2] = mas[n / 2] - mas[n / 2 - 1];;

	}
	for (int i = 0; i < n; i++) {
		cout<< mas[i]<<" ";
	}
}