#include <iostream>
#include <cmath>
using namespace std;

int main()
{

	cin.tie(NULL);
	ios_base::sync_with_stdio(false);

	int m, n;
	cin >> m >> n;

	bool check[10001]{false};
	check[1] = true;

	for (int i = 2; i < int(pow(n, 0.5)) + 1; i++)
	{
		int idx = 2;

		while (i * idx <= n)
		{
			check[i * idx] = true;
			idx++;
		}
	}

	int sum = 0;
	int min = 0;

	for (int i = m; i <= n; i++)
	{
		if (!check[i])
		{
			if (sum == 0)
				min = i;

			sum += i;
		}
	}

	if (sum)
	{
		cout << sum << endl;
		cout << min << endl;
	}
	else
		cout << -1 << endl;

	return 0;
}