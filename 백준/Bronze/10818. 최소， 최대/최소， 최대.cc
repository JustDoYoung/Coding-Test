#include <iostream>
using namespace std;

int main(){
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);
    
    int n;
    cin >> n;
    
    int min = INT32_MAX;
    int max = INT32_MIN;
    while(n--){
        int input;
        cin >> input;
        
        if(min > input)
            min = input;
        if(max < input)
            max = input;
    }
    
    cout << min << ' ' << max << endl;
    
    return 0;
}