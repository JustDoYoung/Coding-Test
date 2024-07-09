#include <bits/stdc++.h>

using namespace std;

int main()
{
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);

    int n;
    cin >> n;

    int check[2]{0, 0};
    for (int i = 2; i <= n; i++)
    {
        int x = i;
        while (x % 2 == 0)
        {
            check[0]++;
            x /= 2;
        }

        while (x % 5 == 0)
        {
            check[1]++;
            x /= 5;
        }
    }

    cout << *min_element(check, check + 2) << endl;

    return 0;
}