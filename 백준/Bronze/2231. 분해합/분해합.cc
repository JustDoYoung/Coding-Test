#include "bits/stdc++.h"

using namespace std;

int main()

{

    cin.tie(NULL);
    ios_base::sync_with_stdio(false);

    int n;
    cin >> n;
    
    int i = 54;
    int temp;
    for(; i > 0; i --){
        temp = n - i;
        
        int check = temp;
        for(int j = 1; j < 7; j++){
            if(temp == 0) break;
            check += temp % 10;
            temp /= 10;
        }
        
        if(check == n) break;
        }
    
    if(i == 0)
        cout << 0 << '\n';
    else
        cout << n-i << '\n';

    return 0;

}