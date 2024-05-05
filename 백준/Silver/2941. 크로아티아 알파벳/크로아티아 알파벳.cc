#include <iostream>
using namespace std;

int main() {

	cin.tie(NULL);
	ios_base::sync_with_stdio(false);

	string cro_alpha[8] = { "c=", "c-", "dz=", "d-", "lj", "nj", "s=", "z=" };

	string input;
	cin >> input;

	int count = 0;

	for (int i = 0; i < 8; i++) {
		string::size_type check = input.find(cro_alpha[i]);
			while (check != string::npos)
			{
				input.replace(check, cro_alpha[i].length(), " ");
				count ++;
				check = input.find(cro_alpha[i]);
			}
	}

	int length = input.length();
	for (int i = 0; i < length; i++) {
		if (input[i] == ' ') continue;
		count++;
	}

	cout << count<< endl;
	return 0;
}