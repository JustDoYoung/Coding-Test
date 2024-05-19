#include <iostream>
using namespace std;

void Filter(int &n, int &n_check, int &pos)
{
	if (n != pos && n_check != pos)
	{
		n_check = n;
		n = pos;
	}
	else if (n == pos)
	{
		n = n_check;
	}
}
int main()
{
	int x_check = 0;
	int y_check = 0;
	int x = 0;
	int y = 0;

	cin.tie(NULL);
	ios_base::sync_with_stdio(false);

	for (int i = 0; i < 3; i++)
	{
		int a, b;
		cin >> a >> b;

		Filter(x, x_check, a);
		Filter(y, y_check, b);
	}

	cout << x << ' ' << y << endl;

	return 0;
}