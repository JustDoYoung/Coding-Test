#include <iostream>
#include<cmath>

using namespace std;

int main() {

	int t;

	cin >> t;

	while (t > 0) {
		t--;

		int x1, y1, r1, x2, y2, r2;

		cin >> x1 >> y1 >> r1 >> x2 >> y2 >> r2;

		if (x1 == x2 && y1 == y2 && r1 == r2) {
			if (r1 == r2) {
				cout << -1 << endl;
				continue;
			}
			else {
				cout << 0 << endl;
				continue;
			}
				
		}

		float c = sqrt(pow((x1 - x2), 2) + pow((y1 - y2), 2));

		if (c == r1 + r2 || c == abs(r1 - r2)) {
			cout << 1 << endl;
			continue;
		}

		if (abs(r1 - r2) < c && c < r1 + r2) {
			cout << 2 << endl;
			continue;
		}

		cout << 0 << endl;
	}
}