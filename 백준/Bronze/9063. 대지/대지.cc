#include <iostream>
#include <cmath>
#include <cstdint>

using namespace std;

int main()
{
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);

	int n;
	cin >> n;

	int min_x = INT32_MAX;
	int min_y = INT32_MAX;
	int max_x = INT32_MIN;
	int max_y = INT32_MIN;

	while (n--)
	{
		int a, b;
		cin >> a >> b;

		min_x = min(min_x, a);
		max_x = max(max_x, a);

		min_y = min(min_y, b);
		max_y = max(max_y, b);
	}

	cout << (max_x - min_x) * (max_y - min_y) << endl;

	return 0;
}