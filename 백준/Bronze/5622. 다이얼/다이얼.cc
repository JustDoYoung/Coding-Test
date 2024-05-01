#include <iostream>
#include <string>
using namespace std;

int main() {

	cin.tie(NULL);
	ios_base::sync_with_stdio(false);

	string input;
	cin >> input;

	int second = 0;
	for (int i = 0; input[i]; i++) {
		if (input[i] == 'S') {
			second += 8;
			continue;
		}
		else if (input[i] == 'V') {
			second += 9;
			continue;
		}
		else if (input[i] == 'Y' || input[i] == 'Z') {
			second += 10;
			continue;
		}

		second += ((input[i] - 'A') / 3) + 3;
	}

	cout << second << endl;

	return 0;
}