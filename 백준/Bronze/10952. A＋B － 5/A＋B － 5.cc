#include <iostream>

using namespace std;

int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);

	while (true) {
		int a, b;
		cin >> a >> b;

		if (a + b == 0) break;

		cout << a + b << '\n';
	}

	return 0;
}