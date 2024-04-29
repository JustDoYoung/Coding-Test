#include <iostream>
#include <cstring>
using namespace std;

int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);

	int n;
	cin >> n;

	while (n--) {
		char input[1000];
		cin >> input;

		cout << input[0] << input[strlen(input) - 1] << endl;
	}

	return 0;
}