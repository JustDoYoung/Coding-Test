#include <iostream>
#include <string>
using namespace std;

int main() {

	cin.tie(NULL);
	ios_base::sync_with_stdio(false);

	string a;
	string b;
	cin >> a >> b;

	swap(a[0], a[2]);
	swap(b[0], b[2]);

	cout << max(a, b) << endl;

	return 0;
}