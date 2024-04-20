#include <iostream>
#include<cmath>

using namespace std;

int main() {

	int x, y;
	cin >> x >> y;

	int result;

	if (x > 0) {
		if (y > 0) {
			result = 1;
		}
		else {
			result = 4;
		}
	}
	else {
		if (y > 0) {
			result = 2;
		}
		else {
			result = 3;
		}
	}

	cout << result << endl;

	return 0;
}