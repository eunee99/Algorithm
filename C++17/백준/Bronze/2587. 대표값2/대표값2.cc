#include <iostream>
using namespace std;

int main(void) {
	int arr[5];
	int sum = 0;

	for (int i = 0;i < 5;i++) cin >> arr[i];
	int temp = arr[0];

	for (int i = 0;i < 4;i++) {
		for (int j = i + 1;j < 5;j++) {
			if (arr[i] > arr[j]) {
				temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;
			}
		}
	}

	for (int i = 0; i < 5;i++) sum += arr[i];

	cout << sum / 5 << '\n';
	cout << arr[2];

	return 0;
}