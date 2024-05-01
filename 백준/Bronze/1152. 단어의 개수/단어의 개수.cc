#include <iostream>
using namespace std;

int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);

	char input[1000001];
	cin.getline(input, 1000001);
	
	int count = 0;
	int idx = 0;
	bool check = false;

	while (true) {
		if (input[idx] == '\0') break;

		if (isalpha(input[idx]) && !check) {
			count++;
			check = true;
		}
		else if (!isalpha(input[idx]) && check) {
			check = false;
		}

		idx++;
	}

	cout << count << endl;

	return 0;
}