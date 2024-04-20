#include <iostream>
#include<cmath>

using namespace std;

int main() {

	char rank[] = { 'D', 'C', 'B', 'A' };

	int score;

	cin >> score;

	score -= 60;

	if (score == 40) {
		cout << 'A' << endl;
	}
	else if (score < 0) {
		cout << 'F' << endl;
	}
	else {
		cout << rank[(score / 10) % 4] << endl;
	}

	return 0;
}