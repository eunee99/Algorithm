#include <iostream>
using namespace std;

int main(void) {
	int arr[9][9] = {0};
	int max = 0;
	int x, y;

	for (int i = 0;i < 9;i++) {
		for (int j = 0;j < 9;j++) {
			cin >> arr[i][j];
		}
	}

	for (int i = 0;i < 9;i++) {
		for (int j = 0;j < 9;j++) {
			if (max <= arr[i][j]) {
				max = arr[i][j];
				x = i+1;
				y = j+1;
			}
		}
	}
	cout << max<<'\n';
	cout << x << ' ' << y;
	return 0;
}