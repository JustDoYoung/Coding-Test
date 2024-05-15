#include <iostream>
#include <cmath>
using namespace std;

int main()
{

	cin.tie(NULL);
	ios_base::sync_with_stdio(false);

	int n, k;
	cin >> n >> k;

	int i = 1;
	int cnt = 0;

	for (; i <= n; i++)
	{
		if (n % i == 0)
			cnt++;

		if (cnt == k)
		{
			cout << i << endl;
			break;
		}
	}

	if (i > n)
		cout << 0 << endl;

	return 0;
}