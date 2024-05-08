#include <iostream>
using namespace std;

int main() {

	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	
	int pos[2] = {0,0};
	int max = INT32_MIN;

	for (int i = 1; i < 10; i++) {
		for (int j = 1; j < 10; j++) {
			int input;
			cin >> input;

			if (max < input) {
				max = input;
				pos[0] = i;
				pos[1] = j;
			}
		}
	}

	cout << max << '\n';
	cout << pos[0] << ' ' << pos[1] << endl;

	return 0;
}