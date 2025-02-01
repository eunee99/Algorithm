#include <iostream>
using namespace std;

int main(void) {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int N, N1;
	int cnt = 0;

	cin >> N;
	N1 = N;

	while (1) {
		N1 = (N1%10) * 10 + ((N1 / 10 + N1 % 10) % 10);
		++cnt;
		if (N == N1) break;
	}
	cout << cnt;
}