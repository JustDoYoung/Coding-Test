#include <iostream>
using namespace std;

int main() {

	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	
	int input;
	cin >> input;

	int check = 1;
	int idx = 0;
	while (check < input) {
		idx++;
		check += 6 * idx;
	}

	cout << idx+1 << endl;

	return 0;
}