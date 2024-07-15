#include <bits/stdc++.h>

using namespace std;

int main()
{
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);

    string input;
    getline(cin, input);

    for (int i = 0; i < input.length(); i++)
    {
        if (input[i] >= 'A' && input[i] <= 'Z')
        {
            if (input[i] + 13 > 'Z')
            {
                input[i] = input[i] + 13 - 26;
            }
            else
            {
                input[i] = input[i] + 13;
            }
        }
        else if (input[i] >= 'a' && input[i] <= 'z')
        {
            if (input[i] + 13 > 'z')
            {
                input[i] = input[i] + 13 - 26;
            }
            else
            {
                input[i] = input[i] + 13;
            }
        }
    }

    cout << input << '\n';

    return 0;
}