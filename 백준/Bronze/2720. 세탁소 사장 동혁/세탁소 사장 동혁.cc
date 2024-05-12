#include <iostream>
#include <stack>
#include <cmath>
using namespace std;

int main() {

	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	
	int count;
	cin >> count;

	int cents[4] = { 25, 10, 5, 1 };

	while (count--) {
		int input;
		cin >> input;

		for (int i = 0; i < 4; i++) {
			cout << input / cents[i] << ' ';
			input %= cents[i];
		}
		cout << endl;
	}

	return 0;
}