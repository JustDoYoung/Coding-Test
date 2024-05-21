#include <iostream>
#include <string>
#include <cmath>

using namespace std;

int main()
{
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);

	while (true)
	{
		int a, b, c;
		cin >> a >> b >> c;

		string triangle_type;
		int sum = a + b + c;

		if (sum == 0)
			break;

		int mx = max(a, b);
		mx = max(mx, c);

		if (sum - mx <= mx)
		{
			triangle_type = "Invalid";
		}
		else
		{
			if (a == sum / 3.0f)
			{
				triangle_type = "Equilateral";
			}
			else if (a != b && b != c && c != a)
			{
				triangle_type = "Scalene";
			}
			else
			{
				triangle_type = "Isosceles";
			}
		}

		cout << triangle_type << '\n';
	}

	return 0;
}