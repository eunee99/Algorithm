#include <iostream>
using namespace std;

int main(void) {
	int a, b, temp;
	int arr[20] = { 0 };

	for (int i = 0;i < 20;i++) arr[i] = i+1;

	for (int i = 0;i < 10;i++) {
		cin >> a >> b;
		for (int j = a - 1, k = b - 1;j < k;j++, k--) {
			temp = arr[j];
			arr[j] = arr[k];
			arr[k] = temp;
		}
	}

	for (int i = 0; i < 20;i++) cout << arr[i] << ' ';
	return 0;
}