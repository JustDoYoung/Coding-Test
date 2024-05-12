#include <iostream>
#include <stack>
#include <cmath>
using namespace std;

int main() {

	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	
	int N;
	int base;

	cin >> N >> base;

	stack<int> s;

	while (N) {
		s.push(N % base);
		N /= base;
	}

	while (!s.empty()) {
		if (s.top() > 9)
		{
			cout << char(s.top() - 10 + 'A');
			s.pop();
			continue;
		}
		else {
			cout << char(s.top()+'0');
			s.pop();
			continue;
		}
	}


	return 0;
}