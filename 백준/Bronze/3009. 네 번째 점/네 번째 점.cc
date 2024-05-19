#include <iostream>
using namespace std;

int main()
{
	int x = 0;
	int y = 0;

	cin.tie(NULL);
	ios_base::sync_with_stdio(false);

	for (int i = 0; i < 3; i++)
	{
		int a, b;
		cin >> a >> b;

		x ^= a;
		y ^= b;
	}

	cout << x << ' ' << y << endl;

	return 0;
}