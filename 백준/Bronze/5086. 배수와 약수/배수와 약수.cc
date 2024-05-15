#include <iostream>
using namespace std;

int main()
{

	cin.tie(NULL);
	ios_base::sync_with_stdio(false);

	while (true)
	{
		int a, b;
		cin >> a >> b;

		if (!(a && b))
			break;

		if (a % b == 0)
		{
			cout << "multiple" << endl;
		}
		else if (b % a == 0)
		{
			cout << "factor" << endl;
		}
		else
		{
			cout << "neither" << endl;
		}
	}

	return 0;
}