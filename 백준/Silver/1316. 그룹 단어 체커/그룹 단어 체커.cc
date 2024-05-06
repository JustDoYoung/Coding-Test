#include <iostream>
using namespace std;

int main() {

	cin.tie(NULL);
	ios_base::sync_with_stdio(false);

	int count = 0;
	int n;
	cin >> n;

	while (n--) {
		string input;
		cin >> input;

		int check[26]{ 0 };
		int len = input.length();
		char prev = '\0';

		while (len--) {
			if (check[input[len] - 'a'] != 0 && prev != input[len]) break;

			prev = input[len];
			check[input[len] - 'a']++;
		}

		if (len == -1) count++;
	}

	cout << count << endl;

	return 0;
}