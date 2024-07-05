#include <bits/stdc++.h>

using namespace std;

struct Data
{
public:
    int cost;
    int people;
};

int main()
{
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);

    int c, n;
    cin >> c >> n;

    vector<Data> v;
    vector<int> goals(c + 1);
    for (int i = 1; i <= c; i++)
    {
        goals[i] = INT32_MAX;
    }

    while (n--)
    {
        int cost, people;
        cin >> cost >> people;

        Data temp = {cost, people};
        v.push_back(temp);
    }

    for (int i = 1; i <= c; i++)
    {
        for (Data data : v)
        {
            if (data.people > i)
            {
                goals[i] = min(goals[i], data.cost);
            }
            else
            {
                goals[i] = min(goals[i], data.cost + goals[i - data.people]);
            }
        }
    }

    cout << goals[c] << '\n';

    return 0;
}