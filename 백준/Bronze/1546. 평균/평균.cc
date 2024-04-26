#include <iostream>
#include <iomanip>

using namespace std;

int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);

	int n;
	cin >> n;

	int scores[1000]{ 0 };
	int max = INT32_MIN;

	for (int i = 0; i < n; i++) {
		int input;
		cin >> input;

		scores[i] = input;

		if (max < input) max = input;
	}

	float avg = 0.0f;
	for (int i = 0; i < n; i++) {
		avg += scores[i] / float(max) * 100.0f;
	}

	avg /= n;
	cout << setprecision(3) << avg << endl;

	return 0;
}