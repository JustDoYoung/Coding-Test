#include <iostream>

using namespace std;

int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);

	int n;
	cin >> n;

	for (int i = 1; i <= n; i++) {
		for (int a = 0; a < n - i; a++) {
			cout << " ";
		}
		for (int b = 0; b < i; b++) {
			cout << "*";
		}
		cout << '\n';
	}

	return 0;
}