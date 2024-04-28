#include <iostream>
using namespace std;

int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);

	char input[101];
	cin >> input;

	int len = 0;
	while (true) {
		if (input[len] == '\0') break;
		len++;
	}

	cout << len << endl;

	return 0;
}