#include <iostream>
#include <string>

using namespace std;

int main()
{
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);

	int a, b, c;
	cin >> a >> b >> c;

	int sum = a + b + c;
	string triangle_type;

	if (sum == 180)
	{
		if (a == 60 && b == 60)
		{
			triangle_type = "Equilateral";
		}
		else if (a != b && b != c && a != c)
		{
			triangle_type = "Scalene";
		}
		else
		{
			triangle_type = "Isosceles";
		}
	}
	else
	{
		triangle_type = "Error";
	}

	cout << triangle_type << endl;

	return 0;
}