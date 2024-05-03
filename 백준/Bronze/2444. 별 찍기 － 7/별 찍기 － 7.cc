#include <iostream>
#include <iomanip>
using namespace std;

int main() {

	cin.tie(NULL);
	ios_base::sync_with_stdio(false);

	int input;
	cin >> input;

	int max = 2 * input - 1;
	for (int i = 1; i <= max; i++) {
		int star = i <= input ? 2 * i - 1 : max - 2 * (i - input);
		int blank = (max / 2) - star / 2;

		for (; blank > 0; blank--) {
			cout << " ";
		}

		for (; star; star--) {
			cout << "*";
		}
		cout << endl;
	}

	return 0;
}