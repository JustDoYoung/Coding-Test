#include <iostream>
#include <cstring>
using namespace std;

int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);

	char input[1000001];
	cin.getline(input, 1000001);
	
	int len = strlen(input);
	int count = 1;

	for(int i = 0; input[i]; i++)
		if (input[i] == ' ') count++;
	
	if (input[0] == ' ') count--;
	if (input[len - 1] == ' ') count--;

	cout << count << endl;

	return 0;
}