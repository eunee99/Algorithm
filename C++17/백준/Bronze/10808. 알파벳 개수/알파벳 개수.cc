#include <iostream>
#include <cstring>
using namespace std;

int arr[26];
int main(void) {
	string s;
	cin >> s;
	for (auto c : s)
		arr[c - 97]++;
	for(int i = 0;i<26;i++){
		cout << arr[i] << ' ';
	}
	return 0;
}