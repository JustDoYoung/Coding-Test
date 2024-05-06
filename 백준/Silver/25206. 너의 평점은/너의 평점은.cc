#include <iostream>
using namespace std;

int main() {

	cin.tie(NULL);
	ios_base::sync_with_stdio(false);

	float grade_sum = 0.0f;
	float credit_sum = 0.0f;

	int grade[4] = { 4, 3, 2, 1 };

	while (true) {
		string subject;
		float credit;
		string score;
		cin >> subject >> credit >> score;

		if (cin.eof()) break;

		if (score == "P")continue;

		credit_sum += credit;

		if (score == "F") continue;

		float gr = grade[score[0] - 'A'];
		if (score[1] == '+') gr += 0.5f;

		gr *= credit;
		grade_sum += gr;
	}

	cout << grade_sum / float(credit_sum) << endl;

	return 0;
}