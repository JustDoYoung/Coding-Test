#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int main() {

	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	
	string N;
	int base;

	cin >> N >> base;

	int idx = 0;
	int answer = 0;

	while (idx < N.length()) {

		int coef = N[idx] >= '0' && N[idx] <= '9' ? int(N[idx]-'0') : int(N[idx] - 'A') + 10;

		answer += coef * pow(base, N.length() - idx - 1);
		idx++;
	}

	cout << answer << endl;

	return 0;
}