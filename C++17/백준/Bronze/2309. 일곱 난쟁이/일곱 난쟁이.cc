#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main(void) {
	vector<int> vec;

	int n;
	int sum = 0;

	for (int i = 0; i < 9;i++) {
		cin >> n;
		vec.push_back(n);
	}
	for (int i = 0; i < 9;i++) sum += vec[i];
	sort(vec.begin(), vec.end());

	int er1, er2;
	for (int i = 0; i < 9;i++) {
		for (int j = 0; j < 9;j++) {
			if (i!=j && 100 == sum - (vec[i]+vec[j])) {
				er1 = i;
				er2 = j;
			};
		}
	}
	vec.erase(vec.begin() + er1);
	vec.erase(vec.begin() + er2);

	for (int i = 0; i < vec.size();i++) cout << vec[i] <<'\n';
	return 0;
}