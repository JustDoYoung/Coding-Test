#include <iostream>
using namespace std;

int main()
{

	cin.tie(NULL);
	ios_base::sync_with_stdio(false);

	int num;
	cin >> num;

	int count = 1;
	int idx = 1;
	while (num > count)
	{
		idx++;
		count = idx * (idx + 1) / 2;
	}

	count = idx * (idx - 1) / 2;

	if (idx % 2 == 0)
	{
		cout << (num - count) << '/' << idx - (num - count - 1) << endl;
	}
	else
	{
		cout << idx - (num - count - 1) << '/' << (num - count) << endl;
	}

	return 0;
}