#include <bits/stdc++.h>

using namespace std;

int H, W;
vector<string> v;

int main()
{
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);

    cin >> H >> W;

    for (int i = 0; i < H; i++)
    {
        string input;
        cin >> input;
        v.push_back(input);
    }

    for (string row : v)
    {
        int pivot = -1;
        for (int j = 0; j < row.size(); j++)
        {
            int output = -1;

            if (row[j] == 'c')
                pivot = j;

            if (pivot != -1)
                output = j - pivot;

            cout << output << ' ';
        }
        cout << '\n';
    }

    return 0;
}
