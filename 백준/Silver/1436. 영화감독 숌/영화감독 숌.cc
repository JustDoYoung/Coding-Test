#include "bits/stdc++.h"

using namespace std;

int main()

{

    cin.tie(NULL);

    ios_base::sync_with_stdio(false);
    
    int n;
    cin >> n;
    
    int check = 1;
    int s = 666;
    
    while(check != n){
        s++;
        
        string str = to_string(s);
        if(str.find("666") != string::npos)
            {
            check++;
        }
    }
    
    cout << s <<endl;
    
    return 0;
    }