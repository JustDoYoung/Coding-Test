#include <iostream>
#include <string>
using namespace std;

int main() {

	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	
	int count;
	cin >> count;

	int area = 100 * count;
	int paper[100][100]{ 0 };

	while (count--) {
		int x, y;
		cin >> x >> y;

		for (int i = x; i < x + 10; i++) {
			for (int j = y; j < y + 10; j++) {
				paper[i][j]++;
			}
		}
	}

	for (int i = 0; i < 100; i++) {
		for (int j = 0; j < 100; j++) {
			if (paper[i][j] > 1) {
				area -= (paper[i][j]-1);
			}
		}
	}

	cout << area << endl;

	return 0;
}