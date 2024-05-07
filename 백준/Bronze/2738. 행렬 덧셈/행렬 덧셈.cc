#include <iostream>
#include <string>
using namespace std;

static int row, col;
void CreateArray(int (*arr)[100]) {
	for (int i = 0; i < row; i++) {
		for (int j = 0; j < col; j++) {
			int item;
			cin >> item;
			arr[i][j] = item;
		}
	}
}

int main() {

	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	
	cin >> row >> col;

	int arr1[100][100];
	int arr2[100][100];

	CreateArray(arr1);
	CreateArray(arr2);

	for (int i = 0; i < row; i++) {
		for (int j = 0; j < col; j++) {
			cout << arr1[i][j] + arr2[i][j] << " ";
		}
		cout << endl;
	}

	return 0;
}