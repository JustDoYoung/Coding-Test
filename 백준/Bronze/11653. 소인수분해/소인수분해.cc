#include <iostream>
#include <cmath>
using namespace std;

int main()
{

	cin.tie(NULL);
	ios_base::sync_with_stdio(false);

	int input;
	cin >> input;

	int n = 2;
	while (input != 1)
	{
		if (input % n == 0)
		{
			input /= n;
			cout << n << endl;
		}
		else
			n++;
	}

	return 0;
}