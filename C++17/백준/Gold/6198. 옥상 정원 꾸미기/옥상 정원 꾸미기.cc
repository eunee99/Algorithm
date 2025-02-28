#include <iostream>
#include <stack>

using namespace std;

int main(void) {
	int n;
	cin >> n;

	stack<int> st;
	long long tot = 0;

	for (int i = 0; i < n; i++) {
		int h;
		cin >> h;
		
		while (!st.empty() && st.top() <= h) {
			st.pop();
		}

		tot += st.size();
		st.push(h);
	}
	cout << tot;

	return 0;
}