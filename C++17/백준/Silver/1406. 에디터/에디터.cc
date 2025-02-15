#include <iostream>
#include <string>
#include <list>

using namespace std;

int main(void) {
	list<char> li;
	list<char>::iterator iter;

	string s;
	int m;
	char edit, ch;

	cin >> s;

	iter = li.begin();
	for (char c : s) li.push_back(c);

	cin >> m;
	iter = li.end();

	for (int i = 0;i < m;i++) {
		cin >> edit;

		switch (edit)
		{
			case ('L'):
				if (iter != li.begin()) --iter;
				break;
			case ('D'):
				if (iter != li.end()) ++iter;
				break;
			case ('B'):
				if (iter != li.begin()) {
					--iter;
					iter = li.erase(iter);
				}
				break;
			case('P'):
				cin >> ch;
				li.insert(iter, ch);
		}
	}
	for (iter = li.begin(); iter != li.end(); iter++) cout << *iter;

	return 0;
}