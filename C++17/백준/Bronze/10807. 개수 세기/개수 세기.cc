#include <iostream>
#include <vector>

using namespace std;

int main(void) {
	int N;
	cin >> N;

	vector<int> m(N);

	for (int i = 0;i < N;i++) {
		cin >> m[i];
	}

	int v;
	int cnt = 0;
	cin >> v;

	for (int i = 0;i < N;i++) {
		if (m[i] == v) ++cnt;
	}

	cout << cnt;
	return 0;
}