#include <iostream>
#include <string>
#include <list>

using namespace std;

int main(void) {
	int n;
	string l;

	cin >> n;

	while (n--) {
		
		list<char> li;
		auto iter = li.begin();

		cin >> l;

		for (char c : l) {
			switch (c) {
			case '<':
				if (iter != li.begin()) --iter;
				break;
			case '>':
				if (iter != li.end()) ++iter;
				break;
			case '-':
				if (iter != li.begin()) {
					iter = li.erase(--iter);
				}
				break;
			default:
				li.insert(iter, c);
			}
		}

		for (char c : li) cout << c;
		cout << '\n';
	}

	return 0;
}
