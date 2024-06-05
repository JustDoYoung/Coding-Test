#include <bits/stdc++.h>

using namespace std;

int main()
{
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);

    int n;
    cin >> n;
    
    vector<int> v;
    
    for(int i =0; i < n; i++)
{
        int input;
        cin >> input;
        v.push_back(input);
    }
    
    sort(v.begin(), v.end());
    
    for(int i : v)
        cout << i << " ";
    cout << endl;
    return 0;
}