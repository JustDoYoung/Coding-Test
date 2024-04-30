#include <iostream>
using namespace std;

int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);

	char input[101];
	cin >> input;

	int alpha[26];
	fill_n(alpha, 26, -1);

	int idx = 0;
	while (input[idx] != '\0') {
		if (alpha[input[idx] - 'a'] == -1) {
			alpha[input[idx] - 'a'] = idx;
		}
		idx++;
	}

	for (int i = 0; i < 26; i++) {
		cout << alpha[i] << ' ';
	}

	cout << endl;

	return 0;
}