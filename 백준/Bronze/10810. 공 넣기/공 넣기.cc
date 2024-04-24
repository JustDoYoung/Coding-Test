#include <iostream>
using namespace std;

int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);

	int last_basket, count;
	cin >> last_basket >> count;

	int baskets[100] = { 0 };
	while (count--) {
		int s, e, num;
		cin >> s >> e >> num;

		for (; s <= e; s++) {
			baskets[s] = num;
		}
	}

	for (int i = 1; i <= last_basket; i++) {
		cout << baskets[i] << " ";
	}
	
	return 0;
}