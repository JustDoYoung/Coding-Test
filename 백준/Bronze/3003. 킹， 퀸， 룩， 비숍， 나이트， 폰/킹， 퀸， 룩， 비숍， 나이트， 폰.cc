#include <iostream>
using namespace std;

int main() {

	cin.tie(NULL);
	ios_base::sync_with_stdio(false);

	int chess[6] = { 1, 1, 2, 2, 2, 8 };

	for (int i = 0; i < 6; i++) {
		int input;
		cin >> input;

		cout << chess[i] - input << " " << flush;
	}

	return 0;
}