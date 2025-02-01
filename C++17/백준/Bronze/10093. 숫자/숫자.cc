#include <iostream>
using namespace std;

int main(void) {
	//ios::sync_with_stdio(0);
	//cin.tie(0);

	long long a, b, temp;
	long long n = 0;
	cin >> a >> b;

	if (a > b) {
		temp = b;
		b = a;
		a = temp;
	}

	if (a == b || (b-a == 1)) cout << 0;
	else {
		n = b - a - 1;
		cout << n << '\n';
		for (long long i = a+1;i < b;++i) {
			cout << i << ' ';
		}
	}
	return 0;
}