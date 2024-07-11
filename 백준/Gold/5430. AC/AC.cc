#include <bits/stdc++.h>

using namespace std;

void split(vector<string> &v, string input)
{
    size_t s = 0;
    size_t e = input.find(',', s);

    while (e != string::npos)
    {
        v.push_back(input.substr(s, e - s));
        s = e + 1;
        e = input.find(',', s);
    }

    v.push_back(input.substr(s));
}

int main()
{
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);

    int T;
    cin >> T;

    while (T--)
    {
        string input;
        cin >> input;

        int l;
        string arr;
        cin >> l >> arr;

        int s = 0;
        int e = l - 1;

        bool isErr = false;
        bool isEmpty = false;
        bool isReversed = false;

        vector<string> v;
        split(v, arr.substr(1, arr.length() - 2));

        for (char i : input)
        {
            if (s > e)
                isEmpty = true;

            if (i == 'R')
            {
                isReversed = !isReversed;
            }
            else if (i == 'D')
            {

                if (isEmpty)
                {
                    isErr = true;
                    break;
                }

                if (isReversed)
                {
                    e -= 1;
                }
                else
                {
                    s += 1;
                }
            }
        }

        if (s > e)
            isEmpty = true;

        if (!isErr)
        {
            if (isEmpty)
            {
                arr = "[]";
            }
            else
            {
                if (isReversed)
                    reverse(v.begin() + s, v.begin() + e + 1);

                arr = "[";
                for (int i = s; i <= e; i++)
                    arr += v[i] + ',';
                arr.pop_back();
                arr += "]";
            }
        }
        else
        {
            arr = "error";
        }

        cout << arr << '\n';
    }

    return 0;
}