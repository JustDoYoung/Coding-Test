#include <iostream>
using namespace std;

int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);

	bool check[42]{ false };
	for (int i = 0; i < 10; i++) {
		int input;
		cin >> input;

		check[input % 42] = true;
	}

	int count = 0;
	for (int i = 0; i < 42; i++) {
		if (check[i]) count++;
	}
	
	cout << count << endl;

	return 0;
}