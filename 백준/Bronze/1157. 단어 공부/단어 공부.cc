#include <iostream>
using namespace std;

int main() {

	cin.tie(NULL);
	ios_base::sync_with_stdio(false);

	int alpha[26]{ 0 };
	
	string input;
	cin >> input;

	int max = INT32_MIN;
	int idx = 0;
	while (true) {
		if (input[idx] == '\0') break;

		int check = input[idx] - 'A';

		if (check >= 0 && check <= 25) {
			
		}else
			check = input[idx] - 'a';

		alpha[check]++;

		if (max < alpha[check]) max = alpha[check];

		idx++;
	}

	int max_idx = -1;
	for (int i = 0; i < 26; i++) {
		if (max == alpha[i]) 
		{ 
			if (max_idx != -1)
			{
				cout << '?' << endl;
				return 0;
			}

			max_idx = i; 
		}
	}

	cout << char('A' + max_idx) << endl;
	return 0;
}