#include <iostream>
#include <string>
using namespace std;

int main(void) {
	char num[10];
	int cnt[10] = { 0 };
	int val;

	string N;
	cin >> N;

	for (char c : N) cnt[c - '0']++;
	cnt[6] = (cnt[6] + cnt[9] + 1) / 2;

	int max = 0;
	for (int i = 0;i < 9;i++) {
		if (max < cnt[i]) max = cnt[i];
	}
	cout << max;
	return 0;
}