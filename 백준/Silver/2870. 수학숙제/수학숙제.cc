#include <bits/stdc++.h>

using namespace std;

int N;
vector<string> v;

string RemoveZero(string input)
{
    int s = 0;
    for (s = 0; s < input.length() - 1; s++)
    {
        if (input[s] != '0')
            break;
    }

    return input.substr(s);
}

void GetNumbers(string input)
{
    int s = 0;

    for (int i = 0; i < input.length(); i++)
    {
        if (isalpha(input[i]))
        {
            string tmp = input.substr(s, i - s);
            s = i + 1;

            if (tmp == "")
                continue;

            v.push_back(RemoveZero(tmp));
        }
    }

    if (s != input.length())
    {
        string tmp = input.substr(s);
        v.push_back(RemoveZero(tmp));
    }
}

bool Compare(string a, string b)
{
    if (a.length() == b.length())
        return a < b;

    return a.length() < b.length();
}

int main()
{
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);

    cin >> N;

    while (N--)
    {
        string input;
        cin >> input;

        GetNumbers(input);
    }

    sort(v.begin(), v.end(), Compare);

    for (string i : v)
        cout << i << '\n';

    return 0;
}
