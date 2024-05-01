#include <iostream>
using namespace std;

int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);

	char input[1000001];
	cin.getline(input, 1000001);
	
	int count = 0;
	bool check = false;

	for(int i = 0; i < 1000001; i++){

		if (input[i] == '\0') break;

		if (isalpha(input[i]) && !check) {
			count++;
			check = true;
		}
		else if (!isalpha(input[i]) && check) {
			check = false;
		}
	}

	cout << count << endl;

	return 0;
}