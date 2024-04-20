#include <iostream>

using namespace std;

int main() {

	int h, m;
	cin >> h >> m;

	int minutes = h * 60 + m - 45;

	if (minutes < 0) minutes += 24 * 60;

	cout << minutes / 60 << " " << minutes % 60 << endl;

	return 0;
}