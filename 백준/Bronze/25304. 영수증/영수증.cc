#include <iostream>

using namespace std;

int main() {

	int total;
	int n;
	cin >> total >> n;

	int sum = 0;
	for (int i = 0; i < n; i++) {
		int a, b;
		cin >> a >> b;

		sum += a * b;
	}

	const char *answer = sum == total ? "Yes" : "No";

	cout << answer << endl;
}