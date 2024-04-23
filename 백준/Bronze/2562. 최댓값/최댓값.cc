#include <iostream>
using namespace std;

int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);

	int index = 1;
	int max_idx = 0;
	int max = INT32_MIN;

	while (index <= 9) {
		int input;
		cin >> input;

		if (input > max) {
			max = input;
			max_idx = index;
		}

		index++;
	}

	cout << max << '\n';
	cout << max_idx << endl;
	
	return 0;
}