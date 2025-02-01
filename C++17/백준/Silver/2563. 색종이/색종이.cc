#include <iostream>
using namespace std;

int main(void) {
	int N, x, y;
	bool paper[100][100] = { 0 };
	int cnt = 0;

	cin >> N;
	for (int i = 0;i < N;i++) {
		cin >> x >> y;
		for (int j = y;j < y + 10;j++) {
			for (int k = x;k < x + 10;k++) {
				paper[j][k] = 1;
			}
		}
	}

	for (int j = 0;j < 100;j++) {
		for (int k = 0;k < 100;k++) {
			if (paper[j][k] == 1) ++cnt;
		}
	}
	cout << cnt;
}