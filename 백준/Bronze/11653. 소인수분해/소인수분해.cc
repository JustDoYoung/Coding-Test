#include <iostream>
#include <cmath>
using namespace std;

int main()
{

	cin.tie(NULL);
	ios_base::sync_with_stdio(false);

	int input;
	cin >> input;

	for (int n = 2; n * n <= input; n++)
	{
		while (input % n == 0)
		{
			input /= n;
			cout << n << endl;
		}
	}

	if (input > 1)
		cout << input << endl;

	return 0;
}