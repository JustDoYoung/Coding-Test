#include <iostream>
using namespace std;

int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);

	int n, m;
	cin >> n >> m;

	int n_arr[100] = { 0 };

	for (int i = 1; i <= n; i++) {
		n_arr[i] = i;
	}

	while (m--) {
		int a, b;
		cin >> a >> b;
		swap(n_arr[a], n_arr[b]);
	}

	for (int i = 1; i <= n; i++) {
		cout << n_arr[i] << " ";
	}
	
	return 0;
}