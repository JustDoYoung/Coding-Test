#include <bits/stdc++.h>

using namespace std;

struct Data
{
    int rank;
    int weight;
    int height;
};

int main()
{
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);

    int n;
    cin >> n;

    vector<Data> v(n);
    for (int i = 0; i < n; i++)
    {
        int weight, height;
        cin >> weight >> height;

        v[i] = {1, weight, height};
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (v[i].weight < v[j].weight && v[i].height < v[j].height)
                v[i].rank++;
        }
    }

    for (auto i : v)
        cout << i.rank << ' ';

    return 0;
}