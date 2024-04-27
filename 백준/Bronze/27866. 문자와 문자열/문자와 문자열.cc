#include <iostream>
using namespace std;

int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);

	char s[1001];
	int idx;
	cin >> s >> idx;

	cout << s[idx-1] << endl;

	return 0;
}