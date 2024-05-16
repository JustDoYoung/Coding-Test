#include <iostream>
using namespace std;

int main()
{

	cin.tie(NULL);
	ios_base::sync_with_stdio(false);

	while (true)
	{
		int n;
		cin >> n;

		if (n == -1)
			break;

		int sum = 0;
		bool check[50000]{false};
		for (int i = 1; i < n; i++)
		{
			if (n % i == 0)
			{
				sum += i;
				check[i] = true;
			}
		}

		if (sum == n)
		{
			cout << n << " = 1";
			for (int i = 2; i <= n / 2; i++)
			{
				if (check[i])
					cout << " + " << i;
			}
			cout << endl;
		}
		else
		{
			cout << n << " is NOT perfect." << endl;
		}
	}

	return 0;
}