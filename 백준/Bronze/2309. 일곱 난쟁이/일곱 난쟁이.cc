#include <bits/stdc++.h>

using namespace std;

int main()
{
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);

    int arr[9];
    for (int i = 0; i < 9; i++)
    {
        cin >> arr[i];
    }

    sort(arr, arr + 9);

    do
    {
        int sum = 0;

        for (int i = 0; i < 7; i++)
            sum += arr[i];

        if (sum == 100)
            break;
    } while (next_permutation(arr, arr + 9));

    for (int i = 0; i < 7; i++)
        cout << arr[i] << '\n';

    return 0;
}