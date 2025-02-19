#include <iostream>
#include <string>

using namespace std;

int main(void) {
	int k, in, pp = 0;
	int arr[100001];

	cin >> k;
	while (k--) {
		cin >> in;
		if (in == 0) pp--;
		else arr[pp++] = in;
	}

	int sum = 0;
	for (int i = 0;i < pp;i++) sum += arr[i];
	cout << sum;
	return 0;
}