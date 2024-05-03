#include <iostream>
using namespace std;

int main() {

	cin.tie(NULL);
	ios_base::sync_with_stdio(false);

	string input;
	cin >> input;

	int len = input.length();

	for (int i = 0; i <= len / 2; i++) {
		if (input[i] != input[len - i - 1]) {
			cout << 0 << endl;
			return 0;
		}
	}
	cout << 1 << endl;

	return 0;
}