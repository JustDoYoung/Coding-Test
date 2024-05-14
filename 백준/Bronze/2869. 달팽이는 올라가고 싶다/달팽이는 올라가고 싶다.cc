#include <iostream>
using namespace std;

int main()
{

	cin.tie(NULL);
	ios_base::sync_with_stdio(false);

	int up, down, height;
	cin >> up >> down >> height;

	int day = 0;
	int snail = 0;

	while (true)
	{
		if (height <= up)
			break;

		int temp = height / up;
		day += temp;
		height += down * temp;
		height -= up * temp;
	}

	if (height > 0)
		day++;

	cout << day << endl;

	return 0;
}