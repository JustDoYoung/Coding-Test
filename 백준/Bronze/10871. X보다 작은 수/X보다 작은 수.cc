#include <iostream>

using namespace std;

int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);

	int item, n, target;
	cin >> n >> target;

	while (n--) {
		cin >> item;
		if (item < target)
			cout << item << ' ';
	}
	
	return 0;
}