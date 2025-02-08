#include <iostream>
#include <string>
#include <vector>
using namespace std;

bool com(string a, string b) {
	if (a.length() != b.length()) return false;
	int aa[26] = { 0 };
	int ba[26] = { 0 };
	for (auto c : a) aa[c - 97]++;
	for (auto c : b) ba[c - 97]++;
	for (int i = 0;i<26;i++) if (aa[i] != ba[i]) return false;

	return true;
}
int main(void) {

	int N;
	cin >> N;

	vector<pair<string, string>> input(N);

	for (int i = 0;i < N;i++) {
		cin >> input[i].first >> input[i].second;
	}
	for (int i = 0;i < N;i++) {
		if (com(input[i].first, input[i].second) == 1) {
			cout << "Possible\n";
		}
		else {
			cout << "Impossible\n";
		}
	}
	return 0;
}