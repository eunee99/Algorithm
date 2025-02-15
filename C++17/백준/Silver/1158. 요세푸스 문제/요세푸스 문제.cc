#include <iostream>
#include <list>

using namespace std;

int main(void) {
	list<int> li;
	list<int>::iterator iter;
	int N, k;
	int idx = 0;

	cin >> N >> k;

	for (int i = 0;i < N;i++) {
		li.push_back(i + 1);
	}

	cout << "<";
	while (!li.empty()) {
		idx = (idx + k - 1) % li.size();
		iter = li.begin();

		if (li.size() == 1) {
			cout << *iter;;
			break;
		}
		for (int i = 0;i < idx;i++) iter++;
		cout << *iter << ", ";

		iter = li.erase(iter);

		if (iter == li.end()) iter = li.begin();
	}
	cout << ">";
	return 0;
}