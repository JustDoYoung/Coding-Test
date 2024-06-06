#include "bits/stdc++.h"

using namespace std;

int main()

{
    cin.tie(NULL);

    ios_base::sync_with_stdio(false);

    int a, b, c, d, e, f;
    cin >> a>> b>> c>> d>> e>> f;
    
    int x = -999;
    int y = -999;
    while(true){
        if(a==0){
            y=c/b;
            x=(f-e*y)/d;
            break;
        }
        else if(b == 0){
            x = c/a;
                y = (f-d*x)/e;
                break;
        }else if((c-a*x)%b == 0){
            y = (c-a*x)/b;
            if(d*x+e*y==f) break;
            }
        
        x++;
        
    }
    
    cout<<x<<' '<<y<<endl;
    
    return 0;

}