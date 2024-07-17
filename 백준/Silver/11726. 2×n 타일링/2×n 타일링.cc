#include <bits/stdc++.h>

using namespace std;

unsigned int arr[1004];

int main()
{
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);

    arr[1] = 1;
    arr[2] = 2;
    arr[3] = 3;

    for (int i = 4; i <= 1000; i++)
    {
        arr[i] = (arr[i - 1] + arr[i - 2]) % 10007;
    }

    int n;
    cin >> n;

    cout << arr[n] << '\n';

    return 0;
}