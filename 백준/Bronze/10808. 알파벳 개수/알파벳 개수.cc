#include <bits/stdc++.h>

using namespace std;

string input;
int check[26];
int main()
{
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);

    cin >> input;

    for (char c : input)
    {
        check[c - 'a']++;
    }

    for (int i : check)
        cout << i << ' ';
    return 0;
}