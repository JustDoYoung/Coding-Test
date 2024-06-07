#include "bits/stdc++.h"

using namespace std;

int main()

{

    cin.tie(NULL);

    ios_base::sync_with_stdio(false);

    int n;
    cin >> n;
    
    int x = 0;
    bool check = false;
    while(true){
        if(3*x > n) break;
        if((n - 3*x)%5 == 0) {
            check = true;
            break;}
    x++;
    }
    
    if(check){
        int y = (n - 3*x)/5;
        cout << x+y <<endl;
        }else{
        cout << -1 << endl;
        }
    return 0;
    
    }

  