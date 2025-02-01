#include <iostream>
#include <vector>

using namespace std;

int main(void) {
	vector<int> vec;
	int n, mn;
	int max = 0;

	for (int i = 0;i < 9;i++) {
		cin >> n;
		vec.push_back(n);
	}
	for (int i = 0;i < vec.size();i++) {
		if (max < vec[i]) {
			max = vec[i];
			mn = i+1;
		}	
	}
	cout << max << '\n'<<mn;
	return 0;
}