#include <iostream>
#include <string>
#include <cmath>

using namespace std;

int main()
{
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);

	int a, b, c;
	cin >> a >> b >> c;

	int mx = max(a, b);
	mx = max(mx, c);

	int sum = a + b + c - mx;

	mx = mx < sum ? mx : sum - 1;

	cout << sum + mx << endl;

	return 0;
}