#include <iostream>
using namespace std;

int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);

	int n;
	cin >> n;

	char input[101];
	cin >> input;

	int answer = 0;
	for (; n > 0; n--) {
		answer += input[n-1]-'0';
	}

	cout << answer << endl;

	return 0;
}