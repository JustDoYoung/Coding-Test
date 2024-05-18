#include <iostream>
#include <cmath>
using namespace std;

int main()
{

	cin.tie(NULL);
	ios_base::sync_with_stdio(false);

	int x, y, a, b;
	cin >> x >> y >> a >> b;

	int dist_x = min(x, a - x);
	int dist_y = min(y, b - y);

	cout << min(dist_x, dist_y) << endl;

	return 0;
}