#include <iostream>

using namespace std;

int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);

	int arr[201] = {0}, n, target;

	cin >> n;
	while (n--) {
		cin >> target;
		arr[target + 100]++;
	}

	cin >> target;
	cout << arr[target + 100] << endl;
	
	return 0;
}