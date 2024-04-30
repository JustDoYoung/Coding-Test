#include <iostream>
using namespace std;

int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);

	int n;
	cin >> n;

	while (n--) {
		int repeat;
		char input[21];
		cin >> repeat >> input;

		int idx = 0;
		while (input[idx] != '\0') {
			for (int i = 0; i < repeat; i++) {
				cout << input[idx];
			}
			idx++;
		}
		cout << endl;
	}

	return 0;
}