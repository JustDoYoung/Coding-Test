#include <bits/stdc++.h>

using namespace std;

set<char> s{'a', 'e', 'i', 'o', 'u'};

int main()
{
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);

    while (true)
    {
        string input;
        cin >> input;

        if (input == "end")
            break;

        pair<int, int> cnt = {0, 0}; //{자음, 모음}
        char prev = '\0';
        bool acceptable = true;
        bool check = false;

        for (char c : input)
        {
            if (prev == c)
            {
                if (cnt.second == 1 && (c == 'e' || c == 'o'))
                {
                    cnt.first = 0;
                    cnt.second++;
                    continue;
                }

                acceptable = false;
                break;
            }

            if (s.find(c) != s.end())
            {
                check = true;
                cnt.first = 0;
                cnt.second++;

                if (cnt.second >= 3)
                {
                    acceptable = false;
                    break;
                }
            }
            else
            {
                cnt.second = 0;
                cnt.first++;

                if (cnt.first >= 3 || prev == c)
                {
                    acceptable = false;
                    break;
                }
            }

            prev = c;
        }

        if (check == false)
            acceptable = false;

        if (acceptable)
            cout << '<' << input << '>' << " is acceptable.\n";
        else
            cout << '<' << input << '>' << " is not acceptable.\n";
    }

    return 0;
}
