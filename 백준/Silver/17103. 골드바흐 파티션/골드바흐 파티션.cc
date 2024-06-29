#include <bits/stdc++.h>

using namespace std;

int main()
{
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);

    int T;
    cin >> T;

    vector<int> v;

    while (T--)
    {
        int input;
        cin >> input;

        v.push_back(input);
    }

    int max_ele = *max_element(v.begin(), v.end());

    bool *arr = new bool[max_ele + 1];
    for (int i = 0; i <= max_ele; i++)
    {
        arr[i] = true;
    }
    arr[0] = arr[1] = false;

    for (int i = 2; i * i <= max_ele; i++)
    {
        if (arr[i])
        {
            for (int j = i * i; j <= max_ele; j += i)
            {
                arr[j] = false;
            }
        }
    }

    set<int> s;
    for (int i = 0; i <= max_ele; i++)
    {
        if (arr[i])
            s.insert(i);
    }

    for (int i : v)
    {
        int count = 0;
        int x = i / 2;
        for (int j : s)
        {
            if (j > x)
                break;
            if (s.find(i - j) == s.end())
                continue;

            count++;
        }

        cout << count << '\n';
    }

    return 0;
}