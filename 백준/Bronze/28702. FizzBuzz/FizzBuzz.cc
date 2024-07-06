#include <bits/stdc++.h>

using namespace std;

int main()
{
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);

    vector<string> v(3);
    cin >> v[0];
    cin >> v[1];
    cin >> v[2];

    int i = 0;
    for (; i < 3; i++)
    {
        if (atoi(v[i].c_str()) != 0)
        {
            int x = stoi(v[i]) + 3 - i;
            if (x % 3 == 0 && x % 5 == 0)
            {
                cout << "FizzBuzz" << '\n';
            }
            else if (x % 3 == 0)
            {
                cout << "Fizz" << '\n';
            }
            else if (x % 5 == 0)
            {
                cout << "Buzz" << '\n';
            }
            else
            {
                cout << x << '\n';
            }

            break;
        }
    }

    return 0;
}