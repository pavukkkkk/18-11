#include <iostream>
using namespace std;

int main()
{
	int n,k,a,s=0;
	cin >> n;
	cin >> k;
	if (n >100) {
		int* mas = new int[k + 1]{};
		for (int i = 0; i < n; i++) {
			cin >> a;
			if (a <= k) {
				mas[a] += 1;
			}

		}
		for (int i = 0; i < k/2; i++) {
			s+= mas[i]*mas[k-i];
		}
		if (k % 2 == 0) {
			s += (mas[k / 2] * (mas[k / 2] - 1) / 2);
			
		}
	}
	else {
		int* mas = new int[n];
		for (int i = 0; i < n ; i++) {
			cin >> mas[i];
		}
		for (int i = 0; i < n-1; i++) {
			for (int j = i + 1; j < n; j++) {
				if (mas[i] + mas[j] == k) {
					s++;
				}
			}
		}


	}
	cout << s;
}