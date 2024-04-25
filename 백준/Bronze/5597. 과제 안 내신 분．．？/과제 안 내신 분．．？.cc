#include <iostream>
using namespace std;

int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);

	bool check[30] { false };

	for (int i = 0; i < 28; i++) {
		int input;
		cin >> input;

		check[input-1] = true;
	}

	for (int i = 0; i < 30; i++) 
	{
		if (!check[i])
			cout << i + 1 << endl;
	}
	
	return 0;
}