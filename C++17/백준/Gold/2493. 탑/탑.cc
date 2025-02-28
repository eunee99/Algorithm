#include <iostream>
#include <stack>
#include <vector>

using namespace std;

int main(void) {
	int n;
	cin >> n;

	vector<int> h(n);
	vector<int> res(n, 0);
	stack<pair<int, int>> st; // 탑 높이, 번호 저장

	for (int i = 0; i < n; i++) {
		cin >> h[i];

		while (!st.empty() && st.top().first < h[i]) {
			st.pop();
		}

		if (!st.empty()) res[i] = st.top().second;
		st.push({ h[i], i + 1 });
	}

	for (int i = 0; i < n; i++) cout << res[i] << " ";
	return 0;
}