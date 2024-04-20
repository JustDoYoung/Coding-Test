#include <iostream>

using namespace std;

int main() {

	int h, m, c;
	cin >> h >> m >> c;
	cin.clear();

	int minutes = h * 60 + m + c;
	if (minutes / 60 >= 24) minutes -= 60*24;

	cout << minutes / 60 << " " << minutes % 60 << endl;

	return 0;
}