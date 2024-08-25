#include <bits/stdc++.h>

using namespace std;

int N, ans;
map<int, int> m;
int arr[200004];

int main()
{
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);

    cin >> N;

    int s = 0;
    for (int i = 0; i < N; i++)
        cin >> arr[i];

    for (int i = 0; i < N; i++)
    {
        if (m.find(arr[i]) == m.end())
        {
            m.insert({arr[i], 0});
        }

        m[arr[i]]++;

        while (m.size() > 2)
        {
            m[arr[s]]--;
            if (m[arr[s]] == 0)
                m.erase(arr[s]);
            s++;
        }

        ans = max(ans, i - s + 1);
    }

    cout << ans << endl;

    return 0;
}