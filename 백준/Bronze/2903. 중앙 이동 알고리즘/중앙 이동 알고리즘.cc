#include <iostream>
#include <cmath>
using namespace std;

int main() {

	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	
	int count;
	cin >> count;

	int i = 1;
	int answer = 4;
	while (count--) {
		answer = 4 * answer - pow(2, i++) * 2 - 3;
	}

	cout << answer << endl;

	return 0;
}