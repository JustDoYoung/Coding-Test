#include <iostream>
#include <cmath>
using namespace std;

int main()
{

	cin.tie(NULL);
	ios_base::sync_with_stdio(false);

	int n;
	cin >> n;
	int count = 0;

	while (n--)
	{
		int input;
		cin >> input;

		bool isPrime = true;
		for (int i = 2; i < int(pow(input, 0.5)) + 1; i++)
		{
			if (input % i == 0)
			{
				isPrime = false;
				break;
			}
		}

		if (input != 1 && isPrime)
			count++;
	}

	cout << count << endl;
	return 0;
}