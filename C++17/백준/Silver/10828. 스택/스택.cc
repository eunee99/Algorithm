#include <iostream>
#include <string>

using namespace std;

int main(void) {
	int N, x, tt = -1;
	int s[10001];
	string cmd;

	cin >> N;

	while (N--) {
		cin >> cmd;

		if (cmd == "push") {
			cin >> x;
			s[++tt] = x;
		}
		else if (cmd == "pop") {
			if (tt == -1) cout << "-1\n";
			else cout << s[tt--] << "\n";
		}
		else if (cmd == "size") {
			cout << tt + 1 << '\n';
		}
		else if (cmd == "empty") {
			cout << (tt == -1 ? 1 : 0) << "\n";
		}
		else if (cmd == "top") {
			if (tt == -1) cout << "-1\n";
			else cout << s[tt] << "\n";
		}		
	}
	return 0;
}