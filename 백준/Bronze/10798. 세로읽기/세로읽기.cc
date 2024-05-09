#include <iostream>
#include <string>
using namespace std;

int main() {

	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	
	string line[5];

	for (int i = 0; i < 5; i++) {
		cin >> line[i];
	}

	int idx = 0;
	for (int j = 0; j < 16; j++) {
		for (int i = 0; i < 5; i++) {
			if (j >= line[i].length()) continue;
			cout << line[i][j];
		}
	}

	cout << endl;

	return 0;
}