#include <iostream>
#include <memory.h>
using namespace std;

int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);

	int n, m;
	cin >> n >> m;

	int* ptr = new int[101] {0};

	for (int i = 1; i <= n; i++) {
		ptr[i] = i;
	}

	while (m--) {
		int s, e;
		cin >> s >> e;

		for (int i = s; i <= (s + e) / 2; i++) {
			swap(ptr[i], ptr[(s + e) - i]);
		}
	}

	for (int i = 1; i <= n; i++) {
		cout << ptr[i] << ' ';
	}

	delete[] ptr;

	return 0;
}