#include <iostream>
using namespace std;

int main(void) {
	int a, b, temp,cnt;
	cin >> a >> b;
	
	if (a > b) {
		temp = a;
		a = b;
		b = temp;
	}
	if (a != b) {
		cnt = b - a - 1;
	}
	else {
		cnt = 0;
	}

	cout << cnt<<'\n';

	for (int i = a+1;i < b;i++) {
		cout << i << ' ';
	}
}